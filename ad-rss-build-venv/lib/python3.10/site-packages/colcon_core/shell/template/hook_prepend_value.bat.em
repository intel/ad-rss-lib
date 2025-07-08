:: generated from colcon_core/shell/template/hook_prepend_value.bat.em
@@echo off

@{
import os
if os.path.isabs(subdirectory):
    value = subdirectory
else:
    value = '%COLCON_CURRENT_PREFIX%'
    if subdirectory:
        value += '\\' + subdirectory
}@
call:colcon_prepend_unique_value @(name) "@(value)"

goto :eof


:: function to prepend a value to a variable
:: which uses semicolons as separators
:: duplicates as well as trailing separators are avoided
:: first argument: the name of the result variable
:: second argument: the value to be prepended
:colcon_prepend_unique_value
  setlocal enabledelayedexpansion
  :: arguments
  set "listname=%~1"
  set "value=%~2"

  :: get values from variable
  set "values=!%listname%!"
  :: start with the new value
  set "all_values=%value%"
  :: skip loop if values is empty
  if "%values%" NEQ "" (
    :: iterate over existing values in the variable
    for %%v in ("%values:;=";"%") do (
      :: ignore empty strings
      if "%%~v" NEQ "" (
        :: ignore duplicates of value
        if "%%~v" NEQ "%value%" (
          :: keep non-duplicate values
          set "all_values=!all_values!;%%~v"
        )
      )
    )
  )
  :: set result variable in parent scope
  endlocal & (
    set "%~1=%all_values%"
  )
goto:eof
