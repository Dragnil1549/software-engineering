#include <iostream>
#include <windows.h>
#include <string>
using namespace std;
int main()
{
    setlocale(LC_CTYPE, "Russian");
    char *a, b, c;
    int k, f;
    a = new char[1];
ty:
    cout << "��� �� ������ �������?" << endl << "1 � ����������� ������� �������� ����� � Windows-1251 ����� ���������� �������� � ��������� � �������� ���������" << endl << "2 � ����������� ������� �������� ����� � Windows - 1251 ����� �������� �������� � ��������� � �������� ���������" << endl << "3 � ����� � ������� ���� �������, ���������������� ��������� �����" << endl << "4 � ����� �� ���������." << endl;
    cin >> k;
    switch (k)
    {
    case 1:
    {
        cout << "������� ����� = ";
        for (int i = 0; i < 2; i++)
        {
            cin >> a[i]; cout << endl;
        }
            if (a[0] >= 'A' && a[0] <= 'Z')
            {
                if (a[1] >= 'a' && a[1] <= 'z')
                {
                    c = a[1] - a[0];
                    cout << "������� " << (int)(c) << endl; break;
                }
                else
                {
                    cout << "������� ��������� ��������� �����" << endl;break;
                    goto ty;
                }
            }
            else
            {
                cout << "������� ������� ��������� �����" << endl; break;
                goto ty;
            }

    }
    }
}