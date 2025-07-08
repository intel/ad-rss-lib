:: generated from colcon_core/shell/template/package.bat.em
@@echo off
@[if hooks]@

:: a batch script is able to determine its own path
:: the prefix is two levels up from the package specific share directory
for %%p in ("%~dp0..\..") do set "COLCON_CURRENT_PREFIX=%%~fp"

@[end if]@
@[for hook in hooks]@
call:call_file "%%COLCON_CURRENT_PREFIX%%\@(hook[0])"@
@[  for hook_arg in hook[1]]@
 @(hook_arg)@
@[  end for]
@[end for]@
@[if hooks]@

set COLCON_CURRENT_PREFIX=
@[end if]@

goto :eof


:: call the specified batch file and output the name when tracing is requested
:: first argument: the batch file
:call_file
  if exist "%~1" (
    if "%COLCON_TRACE%" NEQ "" echo call "%~1"
    call "%~1%"
  ) else (
    echo not found: "%~1" 1>&2
  )
goto:eof
