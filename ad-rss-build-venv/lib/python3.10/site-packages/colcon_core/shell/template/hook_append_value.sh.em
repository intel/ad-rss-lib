# generated from colcon_core/shell/template/hook_append_value.sh.em

@{
import os
if os.path.isabs(subdirectory):
    value = subdirectory
else:
    value = '$COLCON_CURRENT_PREFIX'
    if subdirectory:
        value += '/' + subdirectory
}@

# function to append a value to a variable
# which uses colons as separators
# duplicates as well as trailing separators are avoided
# first argument: the name of the result variable
# second argument: the value to be appended
_colcon_append_unique_value() {
  # arguments
  _listname="$1"
  _value="$2"

  # get values from variable
  eval _values=\"\$$_listname\"
  _duplicate=
  # backup the field separator
  _colcon_append_unique_value_IFS=$IFS
  IFS=":"
  # start with no values
  _all_values=
  # workaround SH_WORD_SPLIT not being set in zsh
  if [ "$(command -v colcon_zsh_convert_to_array)" ]; then
    colcon_zsh_convert_to_array _values
  fi
  # iterate over existing values in the variable
  for _item in $_values; do
    # ignore empty strings
    if [ -z "$_item" ]; then
      continue
    fi
    # ignore _value if already present
    if [ "$_item" = "$_value" ]; then
      _duplicate=1
    fi
    if [ -z "$_all_values" ]; then
      _all_values="$_item"
    else
      _all_values="$_all_values:$_item"
    fi
  done
  unset _item

  # append only non-duplicates
  if [ -z "$_duplicate" ]; then
    # avoid leading separator
    if [ -z "$_all_values" ]; then
      _all_values="$_value"
    else
      _all_values="$_all_values:$_value"
    fi
  fi
  # restore the field separator
  IFS=$_colcon_append_unique_value_IFS
  unset _colcon_append_unique_value_IFS
  # export the updated variable
  eval export $_listname=\"$_all_values\"
  unset _all_values
  unset _duplicate
  unset _values

  unset _value
  unset _listname
}

_colcon_append_unique_value @(name) "@(value)"

unset _colcon_append_unique_value
