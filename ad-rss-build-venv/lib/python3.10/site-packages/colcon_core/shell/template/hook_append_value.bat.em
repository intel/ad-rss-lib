:: generated from colcon_core/shell/template/hook_append_value.bat.em
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
call:colcon_append_unique_value @(name) "@(value)"

goto :eof


:: function to append a value to a variable
:: which uses semicolons as separators
:: duplicates as well as trailing separators are avoided
:: first argument: the name of the result variable
:: second argument: the value to be appended
:colcon_append_unique_value
  setlocal enabledelayedexpansion
  :: arguments
  set "listname=%~1"
  set "value=%~2"

  :: get values from variable
  set "values=!%listname%!"
  set "is_duplicate="
  :: skip loop if values is empty
  if "%values%" NEQ "" (
    :: iterate over existing values in the variable
    for %%v in ("%values:;=";"%") do (
      :: ignore empty strings
      if "%%~v" NEQ "" (
        :: ignore value if already present
        if "%%~v" EQU "%value%" (
          set "is_duplicate=1"
        )
        if "!all_values!" NEQ "" (
          set "all_values=!all_values!;%%~v"
        ) else (
          set "all_values=%%~v"
        )
      )
    )
  )
  :: if it is not a duplicate append it
  if "%is_duplicate%" == "" (
    :: if not empty, append a semi-colon
    if "!all_values!" NEQ "" (
      set "all_values=!all_values!;"
    )
    :: append the value
    set "all_values=!all_values!%value%"
  )
  :: set result variable in parent scope
  endlocal & (
    set "%~1=%all_values%"
  )
goto:eof
