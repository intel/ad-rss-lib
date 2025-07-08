# generated from colcon_core/shell/template/hook_prepend_value.sh.em

@{
import os
if os.path.isabs(subdirectory):
    value = subdirectory
else:
    value = '$COLCON_CURRENT_PREFIX'
    if subdirectory:
        value += '/' + subdirectory
}@
_colcon_prepend_unique_value @(name) "@(value)"
