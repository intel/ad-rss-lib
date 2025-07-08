# generated from colcon_powershell/shell/template/command_prefix.ps1.em
@[for pkg_name, pkg_install_base in dependencies.items()]@
@{
import os
pkg_script = os.path.join(pkg_install_base, 'share', pkg_name, 'package.ps1')
}@
. "@(pkg_script)"
@[end for]@
