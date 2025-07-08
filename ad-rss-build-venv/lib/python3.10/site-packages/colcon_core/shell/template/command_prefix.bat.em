:: generated from colcon_core/shell/template/command_prefix.bat.em
@@echo off
@[for pkg_name, pkg_install_base in dependencies.items()]@
@{
import os
pkg_script = os.path.join(pkg_install_base, 'share', pkg_name, 'package.bat')
}@
call "@(pkg_script)"
@[end for]@
