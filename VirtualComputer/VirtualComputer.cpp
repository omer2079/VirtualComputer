// main Class

#include <iostream>
#include <windows.h>

#include "Learning.cpp"

int main()
{
    SetConsoleTitle(L"Virtual Computer");
    
    Learning learning = Learning();
    learning.main();

    system("pause");
}