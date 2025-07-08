# generated from colcon_core/shell/template/command_prefix.sh.em
@[for pkg_name, pkg_install_base in dependencies.items()]@
@{
import os
pkg_script = os.path.join(pkg_install_base, 'share', pkg_name, 'package.sh')
}@
. "@(pkg_script)"
@[end for]@
