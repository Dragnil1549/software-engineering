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
    cout << "„то вы хотите сделать?" << endl << "1 Ц определение разницы значений кодов в Windows-1251 буквы латинского алфавита в прописном и строчном написании" << endl << "2 Ц определение разницы значений кодов в Windows - 1251 буквы русского алфавита в прописном и строчном написании" << endl << "3 Ц вывод в консоль кода символа, соответствующего введенной цифре" << endl << "4 Ц выход из программы." << endl;
    cin >> k;
    switch (k)
    {
    case 1:
    {
        cout << "¬ведите буквы = ";
        for (int i = 0; i < 2; i++)
        {
            cin >> a[i]; cout << endl;
        }
            if (a[0] >= 'A' && a[0] <= 'Z')
            {
                if (a[1] >= 'a' && a[1] <= 'z')
                {
                    c = a[1] - a[0];
                    cout << "–азница " << (int)(c) << endl; break;
                }
                else
                {
                    cout << "¬ведите маленькую латинскую букву" << endl;break;
                    goto ty;
                }
            }
            else
            {
                cout << "¬ведите большую латинскую буквы" << endl; break;
                goto ty;
            }

    }
    }
}