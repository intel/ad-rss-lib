# copied from colcon-cd/function/colcon_cd.sh

colcon_cd() {
  if [ $# = 0 ]; then
    # change the working directory to the previously saved path
    if [ "$_colcon_cd_root" = "" ]; then
      echo "No previous path saved. Either call 'colcon_cd <pkgname>' from a" \
        "directory where <pkgname> can be found or 'colcon_cd --set' to" \
        "directly save the current working directory." 1>&2
      return 1
    fi
    if [ "$_colcon_cd_root" != "$(pwd)" ]; then
      cd "$_colcon_cd_root"
    fi

  elif [ $# = 1 ]; then
    if [ "$1" = "--help" ]; then
      echo "usage: colcon_cd [--set] [--reset] [PACKAGE_NAME]"
      echo ""
      echo "Change the current working directory."
      echo ""
      echo "  colcon_cd <package_name>"
      echo "    Change the directory to where the package with the given name is found."
      echo "    If the <base> directory is set (by '--set' or previous invocations) it"
      echo "    is searched recursively. As a fallback the current working directory is"
      echo "    searched recursively. In the fallback case the <base> is set to the"
      echo "    current working directory if it was't set before."
      echo ""
      echo "  colcon_cd"
      echo "    Change the directory to the previously stored <base> directory."
      echo ""
      echo "  colcon_cd --set"
      echo "    Store the current working directory as the <base> for future calls to"
      echo "    search packages in."
      echo ""
      echo "  colcon_cd --reset"
      echo "    Reset the previous stored <base>."
      return 0
    elif [ "$1" = "--set" ]; then
      # store the current working directory for future invocations
      _colcon_cd_root="$(pwd)"
      echo "Saved the current working directory for future invocations of" \
        "'colcon_cd <pkgname>' as well as to return to using 'colcon_cd'." \
        "Call 'colcon_cd --reset' to unset the saved path."
      return 0
    elif [ "$1" = "--reset" ]; then
      # unset the save path
      unset _colcon_cd_root
      return 0
    fi

    if [ "$_colcon_cd_root" != "" ]; then
      # try to find the given package from the saved path
      _colcon_cd_pwd="$(pwd)"
      cd "$_colcon_cd_root"

      _colcon_cd_pkg_path="$(COLCON_LOG_PATH=/dev/null colcon list --packages-select $1 --paths-only 2> /dev/null)"
      if [ $? -eq 0 ] && [ "$_colcon_cd_pkg_path" != "" ]; then
        # count number of returned paths
        if [ "$(echo "$_colcon_cd_pkg_path" | grep -c .)" != 1 ]; then
          echo "Found in multiple directories:"
          echo "$_colcon_cd_pkg_path"
          _colcon_cd_pkg_path="$(echo "$_colcon_cd_pkg_path" | grep -m 1 .)"
          echo "cd to the first one"
        fi
        cd "$_colcon_cd_pkg_path"
        unset _colcon_cd_pkg_path
        unset _colcon_cd_pwd
        return 0
      fi
      unset _colcon_cd_pkg_path

      cd "$_colcon_cd_pwd"
      unset _colcon_cd_pwd
    fi

    # try to find the given package from the current working directory
    _colcon_cd_pkg_path="$(COLCON_LOG_PATH=/dev/null colcon list --packages-select $1 --paths-only 2> /dev/null)"
    if [ $? -eq 0 ] && [ "$_colcon_cd_pkg_path" != "" ]; then
      if [ "$_colcon_cd_root" = "" ]; then
        # store the current working directory for future invocations
        _colcon_cd_root="$(pwd)"
        echo "Saved the directory '$_colcon_cd_root' for future invocations" \
          "of 'colcon_cd <pkgname>' as well as to return to using" \
          "'colcon_cd'. Call 'colcon_cd --reset' to unset the saved path."
      fi
      # count number of returned paths
      if [ "$(echo "$_colcon_cd_pkg_path" | grep -c .)" != 1 ]; then
        echo "Found in multiple directories:"
        echo "$_colcon_cd_pkg_path"
        _colcon_cd_pkg_path="$(echo "$_colcon_cd_pkg_path" | grep -m 1 .)"
        echo "cd to the first one"
      fi
      cd "$_colcon_cd_pkg_path"
      unset _colcon_cd_pkg_path
      return 0
    fi
    unset _colcon_cd_pkg_path

    if [ "$_colcon_cd_root" != "" ]; then
      echo "Could neither find package '$1' from '$_colcon_cd_root' nor from" \
        "the current working directory" 1>&2
    else
      echo "Could not find package '$1' from the current working" \
        "directory" 1>&2
    fi
    return 1

  else
    echo "'colcon_cd' only supports zero or one arguments" 1>&2
    return 1
  fi
}
