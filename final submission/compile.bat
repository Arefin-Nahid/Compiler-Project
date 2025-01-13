@echo off
echo Checking dependencies...

where gcc >nul 2>nul
if %errorlevel% neq 0 (
    echo Error: GCC not found! Please install MinGW.
    pause
    exit /b 1
)

where flex >nul 2>nul
if %errorlevel% neq 0 (
    echo Error: Flex not found! Please install WinFlexBison.
    pause
    exit /b 1
)

where bison >nul 2>nul
if %errorlevel% neq 0 (
    echo Error: Bison not found! Please install WinFlexBison.
    pause
    exit /b 1
)

echo All dependencies found!
echo.

echo Compiling project...

echo Running flex...
flex nahid.l
if errorlevel 1 goto error

echo Running bison...
bison -d nahid.y
if errorlevel 1 goto error

echo Compiling with gcc...
gcc lex.yy.c nahid.tab.c -o nahid.exe -lm
if errorlevel 1 goto error

echo Running program...
.\nahid.exe
goto end

:error
echo Build failed!
pause
exit /b 1

:end
echo Build successful!
pause