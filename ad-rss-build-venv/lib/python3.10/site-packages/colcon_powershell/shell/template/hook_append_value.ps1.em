# generated from colcon_powershell/shell/template/hook_append_value.ps1.em

@{
value = '$env:COLCON_CURRENT_PREFIX'
if subdirectory:
    value += '\\' + subdirectory
}@
colcon_append_unique_value @(name) "@(value)"
