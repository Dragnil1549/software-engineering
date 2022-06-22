#include "cas2.h"
#include<iostream>
#include<windows.h>
using namespace std;
int cas2(char b[1])
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    char c;
    c = b[1] - b[0];
    return (int)(c);
}