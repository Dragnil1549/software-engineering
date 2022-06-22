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
    cout << "Что вы хотите сделать?" << endl << "1 – определение разницы значений кодов в Windows - 1251 буквы латинского алфавита в прописном и строчном написании" << endl << "2 – определение разницы значений кодов в Windows - 1251 буквы русского алфавита в прописном и строчном написании" << endl << "3 – вывод в консоль кода символа, соответствующего введенной цифре" << endl << "4 – выход из программы." << endl;
    cin >> choice;
    switch (choice)
    {

    case 1:
        cout << "Введите букву = "; cin >> first_letter; cout << endl;
        if (first_letter >= 'A' && first_letter <= 'Z')
        {
            cout << "Введите букву = "; cin >> second_letter;
            if (second_letter >= 'a' && second_letter <= 'z')
            {
                diff = second_letter - first_letter;
                cout << "Разница " << (int)(diff) << endl; break;
            }
            else
            {
                cout << "Введите маленькую латинскую букву" << endl;break;
                goto prod;
            }
        }
        else
        {
            cout << "Введите большую латинскую буквы" << endl; break;
            goto prod;
        }

    case 2:
        cout << "Введите букву = "; cin >> first_letter; cout << endl;
        if (first_letter >= 'А' && first_letter <= 'Я')
        {
            cout << "Введите букву = "; cin >> second_letter;
            if (second_letter >= 'а' && second_letter <= 'я')
            {
                diff = second_letter - first_letter;
                cout << "Разница " << (int)(diff) << endl; break;
            }
            else
            {
                cout << "Введите маленькую русскую букву" << endl; break;
                goto prod;
            }
        }
        else
        {
            cout << "Введите большую русскую букву" << endl; break;
            goto prod;
        }

    case 3:
        cout << "Введите цифру "; cin >> first_letter;
        if (first_letter >= 48 && first_letter <= 57)
        {
            cout << "Код " << (int)(first_letter) << endl; break;
        }
        else
        {
            cout << "Введите цифру!!!" << endl; break;
            goto prod;
        }

    case 4:
        return 0;
    default:
        cout << "Выберите верный вариант (1-4)" << endl;
        goto prod;
    }

prod:
    cout << "Хотите продолжить? (1 - да 2 - нет)" << endl; cin >> ending;
    if (ending == 1)
        goto start;
    else
        exit;
    return 0;
}
