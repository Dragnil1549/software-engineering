#include <iostream>
#include <windows.h>
#include "cas1.h"
#include "cas2.h"
#include "cas3.h"
using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_CTYPE, "Russian");
    int r, k, f;
start:
    cout << "Что вы хотите сделать?" << endl << "1 – определение разницы значений кодов в Windows - 1251 буквы латинского алфавита в прописном и строчном написании" << endl << "2 – определение разницы значений кодов в Windows - 1251 буквы русского алфавита в прописном и строчном написании" << endl << "3 – вывод в консоль кода символа, соответствующего введенной цифре" << endl << "4 – выход из программы." << endl;
    cin >> k;
    switch (k)
    {
    case 1:
        char* a;
        a = new char[1];
        cout << "Введите буквы = ";
        for (int i = 0; i < 2; i++)
        {
            cin >> a[i]; cout << endl;
        }
        if (a[0] >= 'A' && a[0] <= 'Z')
        {
            if (a[1] >= 'a' && a[1] <= 'z')
            {
                r = cas1(a);
                cout << "Разница " << (int)(r) << endl;
                goto prod;
            }
            else
            {
                cout << "Введите маленькую латинскую букву" << endl;
                goto prod;
            }
        }
        else
        {
            cout << "Введите большую и маленькую латинские буквы" << endl;
            goto prod;
        }
    case 2:
        char* b;
        b = new char[1];
        cout << "Введите буквы = ";
        for (int i = 0; i < 2; i++)
        {
            cin >> b[i]; cout << endl;
        }
        if (b[0] >= 'А' && b[0] <= 'Я')
        {
            if (b[1] >= 'а' && b[1] <= 'я')
            {
                r = cas2(b);
                cout << "Разница " << (int)(r) << endl;
                goto prod;
            }
            else
            {
                cout << "Введите маленькую русскую букву" << endl;
                goto prod;
            }
        }
        else
        {
            cout << "Введите большую и маленькую русскую букву" << endl;
            goto prod;
        }
    case 3:
        char d;
        cout << "Введите цифру "; cin >> d;
        if (d >= 48 && d <= 57)
        {
            r = cas3(d);
            cout << "Код " << (int)(r) << endl;
            goto prod;
        }
        else
        {
            cout << "Введите цифру" << endl;
            goto prod;
        }
    case 4:
        return 0;
    default:
        cout << "Выберите верный вариант (1-4)" << endl;
        goto prod;
    }
prod:
    cout << "Хотите продолжить? (1 - да 2 - нет)" << endl; cin >> f;
    if (f == 1)
        goto start;
    else
        exit;
    return 0;
}