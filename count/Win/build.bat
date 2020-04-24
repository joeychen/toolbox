@echo off
REM VS2010 Command Prompt
call "%vs100comntools%vsvars32.bat"
cl /EHsc ..\count.cpp /link /out:..\bin\Win\count.exe
PAUSE
