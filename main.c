#include <windows.h>

int WINAPI wWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, 
    PWSTR pCmdLine, int nCmdShow)
{
    MessageBoxW(NULL, L"Goodbye, cruel world!", "Note", MB_OK);
    return 0;
}