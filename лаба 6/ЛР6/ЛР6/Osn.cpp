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
    cout << "��� �� ������ �������?" << endl << "1 � ����������� ������� �������� ����� � Windows - 1251 ����� ���������� �������� � ��������� � �������� ���������" << endl << "2 � ����������� ������� �������� ����� � Windows - 1251 ����� �������� �������� � ��������� � �������� ���������" << endl << "3 � ����� � ������� ���� �������, ���������������� ��������� �����" << endl << "4 � ����� �� ���������." << endl;
    cin >> k;
    switch (k)
    {
    case 1:
        char* a;
        a = new char[1];
        cout << "������� ����� = ";
        for (int i = 0; i < 2; i++)
        {
            cin >> a[i]; cout << endl;
        }
        if (a[0] >= 'A' && a[0] <= 'Z')
        {
            if (a[1] >= 'a' && a[1] <= 'z')
            {
                r = cas1(a);
                cout << "������� " << (int)(r) << endl;
                goto prod;
            }
            else
            {
                cout << "������� ��������� ��������� �����" << endl;
                goto prod;
            }
        }
        else
        {
            cout << "������� ������� � ��������� ��������� �����" << endl;
            goto prod;
        }
    case 2:
        char* b;
        b = new char[1];
        cout << "������� ����� = ";
        for (int i = 0; i < 2; i++)
        {
            cin >> b[i]; cout << endl;
        }
        if (b[0] >= '�' && b[0] <= '�')
        {
            if (b[1] >= '�' && b[1] <= '�')
            {
                r = cas2(b);
                cout << "������� " << (int)(r) << endl;
                goto prod;
            }
            else
            {
                cout << "������� ��������� ������� �����" << endl;
                goto prod;
            }
        }
        else
        {
            cout << "������� ������� � ��������� ������� �����" << endl;
            goto prod;
        }
    case 3:
        char d;
        cout << "������� ����� "; cin >> d;
        if (d >= 48 && d <= 57)
        {
            r = cas3(d);
            cout << "��� " << (int)(r) << endl;
            goto prod;
        }
        else
        {
            cout << "������� �����" << endl;
            goto prod;
        }
    case 4:
        return 0;
    default:
        cout << "�������� ������ ������� (1-4)" << endl;
        goto prod;
    }
prod:
    cout << "������ ����������? (1 - �� 2 - ���)" << endl; cin >> f;
    if (f == 1)
        goto start;
    else
        exit;
    return 0;
}