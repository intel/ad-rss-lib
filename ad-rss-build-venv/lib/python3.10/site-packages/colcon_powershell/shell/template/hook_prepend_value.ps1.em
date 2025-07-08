# generated from colcon_powershell/shell/template/hook_prepend_value.ps1.em

@{
value = '$env:COLCON_CURRENT_PREFIX'
if subdirectory:
    value += '\\' + subdirectory
}@
colcon_prepend_unique_value @(name) "@(value)"
