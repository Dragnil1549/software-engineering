#include <iostream>
#include <windows.h>


using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    char first_letter, second_letter, diff;
    int choice, ending;

start:
    cout << "��� �� ������ �������?" << endl << "1 � ����������� ������� �������� ����� � Windows - 1251 ����� ���������� �������� � ��������� � �������� ���������" << endl << "2 � ����������� ������� �������� ����� � Windows - 1251 ����� �������� �������� � ��������� � �������� ���������" << endl << "3 � ����� � ������� ���� �������, ���������������� ��������� �����" << endl << "4 � ����� �� ���������." << endl;
    cin >> choice;
    switch (choice)
    {

    case 1:
        cout << "������� ����� = "; cin >> first_letter; cout << endl;
        if (first_letter >= 'A' && first_letter <= 'Z')
        {
            cout << "������� ����� = "; cin >> second_letter;
            if (second_letter >= 'a' && second_letter <= 'z')
            {
                diff = second_letter - first_letter;
                cout << "������� " << (int)(diff) << endl; break;
            }
            else
            {
                cout << "������� ��������� ��������� �����" << endl;break;
                goto prod;
            }
        }
        else
        {
            cout << "������� ������� ��������� �����" << endl; break;
            goto prod;
        }

    case 2:
        cout << "������� ����� = "; cin >> first_letter; cout << endl;
        if (first_letter >= '�' && first_letter <= '�')
        {
            cout << "������� ����� = "; cin >> second_letter;
            if (second_letter >= '�' && second_letter <= '�')
            {
                diff = second_letter - first_letter;
                cout << "������� " << (int)(diff) << endl; break;
            }
            else
            {
                cout << "������� ��������� ������� �����" << endl; break;
                goto prod;
            }
        }
        else
        {
            cout << "������� ������� ������� �����" << endl; break;
            goto prod;
        }

    case 3:
        cout << "������� ����� "; cin >> first_letter;
        if (first_letter >= 48 && first_letter <= 57)
        {
            cout << "��� " << (int)(first_letter) << endl; break;
        }
        else
        {
            cout << "������� �����!!!" << endl; break;
            goto prod;
        }

    case 4:
        return 0;
    default:
        cout << "�������� ������ ������� (1-4)" << endl;
        goto prod;
    }

prod:
    cout << "������ ����������? (1 - �� 2 - ���)" << endl; cin >> ending;
    if (ending == 1)
        goto start;
    else
        exit;
    return 0;
}
