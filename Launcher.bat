set MODFOLDER="%~dp0."
IF "%PROGRAMFILES(x86)%"=="" (
set ROTKLAUNCHER="%PROGRAMFILES%\Electronic Arts\The Lord of the Rings, The Rise of the Witch-king\lotrbfme2ep1.exe"
) ELSE (
set ROTKLAUNCHER="%PROGRAMFILES(x86)%\Electronic Arts\The Lord of the Rings, The Rise of the Witch-king\lotrbfme2ep1.exe"
)
%ROTKLAUNCHER% -mod %MODFOLDER%
