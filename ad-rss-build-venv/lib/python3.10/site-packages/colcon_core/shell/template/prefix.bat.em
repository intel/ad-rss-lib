:: generated from colcon_core/shell/template/prefix.bat.em
@@echo off

:: This script extends the environment with all packages contained in this
:: prefix path.

:: add this prefix to the COLCON_PREFIX_PATH
call:_colcon_prefix_bat_prepend_unique_value COLCON_PREFIX_PATH "%%~dp0"

:: get and run all commands in topological order
call:_colcon_run_ordered_commands "%~dp0"

goto:eof


:: function to prepend a value to a variable
:: which uses semicolons as separators
:: duplicates as well as trailing separators are avoided
:: first argument: the name of the result variable
:: second argument: the value to be prepended
:_colcon_prefix_bat_prepend_unique_value
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


:: Run the commands in topological order
:: first argument: the base path to look for packages
:_colcon_run_ordered_commands
  setlocal enabledelayedexpansion
  :: check environment variable for custom Python executable
  if "%COLCON_PYTHON_EXECUTABLE%" NEQ "" (
    if not exist "%COLCON_PYTHON_EXECUTABLE%" (
      echo error: COLCON_PYTHON_EXECUTABLE '%COLCON_PYTHON_EXECUTABLE%' doesn't exist
      exit /b 1
    )
    set "_colcon_python_executable=%COLCON_PYTHON_EXECUTABLE%"
  ) else (
    :: use the Python executable known at configure time
    set "_colcon_python_executable=@(python_executable)"
    :: if it doesn't exist try a fall back
    if not exist "!_colcon_python_executable!" (
      python --version > NUL 2> NUL
      if errorlevel 1 (
        echo error: unable to find python executable
        exit /b 1
      )
      set "_colcon_python_executable=python"
    )
  )

  endlocal & (
    set "_colcon_python_executable=%_colcon_python_executable%"
  )

  :: escape potential closing parenthesis which would break the for loop
  set "_colcon_python_executable=%_colcon_python_executable:)=^)%"
  for /f "delims=" %%c in ('""%_colcon_python_executable%" "%~1_local_setup_util_bat.py" bat@
@[if merge_install]@
 --merged-install@
@[end if]@
"') do (
    if "%COLCON_TRACE%" NEQ "" (
      echo %%c
    )
    :: only invoke non-comment lines
    echo %%c | findstr /r "^::" >nul 2>&1
    if errorlevel 1 (
      call %%c
    )
  )
  set _colcon_python_executable=
goto:eof


:: call the specified batch file and output the name when tracing is requested
:: first argument: the batch file
:_colcon_prefix_bat_call_script
  if exist "%~1" (
    if "%COLCON_TRACE%" NEQ "" echo call "%~1"
    call "%~1%"
  ) else (
    echo not found: "%~1" 1>&2
  )
goto:eof


:: strip a leading semicolon from an environment variable if applicable
:: first argument: the environment variable name
:_colcon_prefix_bat_strip_leading_semicolon
  setlocal enabledelayedexpansion
  set "name=%~1"
  set "value=!%name%!"
  if "%value:~0,1%"==";" set "value=%value:~1%"
  :: set result variable in parent scope
  endlocal & (
    set "%~1=%value%"
  )
goto:eof


:: strip a trailing semicolon from an environment variable if applicable
:: first argument: the environment variable name
:_colcon_prefix_bat_strip_trailing_semicolon
  setlocal enabledelayedexpansion
  set "name=%~1"
  set "value=!%name%!"
  if "%value:~-1%"==";" set "value=%value:~0,-1%"
  :: set result variable in parent scope
  endlocal & (
    set "%~1=%value%"
  )
goto:eof
