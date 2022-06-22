#include <iostream>
#include <windows.h>

using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	char a, b, c;
	int k, f;
ty:
	cout << "Что вы хотите сделать? (1 – определение разницы значений кодов в Windows-1251 буквы латинского алфавита в прописном и строчном написании 2 – определение разницы значений кодов в Windows - 1251 буквы русского алфавита в прописном и строчном написании 3 – вывод в консоль кода символа, соответствующего введенной цифре 4 – выход из программы.)" << endl;
	cin >> k;
	switch (k)
	{
	case 1:
		cout << "Введите букву =";
		cin >> a; cout << endl;
		cout << "Введите букву =";
		cin >> b;
		if (a >= 'A' && a <= 'z' && b >= 'A' && b <= 'z')
		{
			c = b - a;
			cout << "Разница" << (int)(c) << endl;
			break;
		}
		else
		{
			cout << "Введите латинские буквы" << endl;
			goto ty;
		}
	case 2:
		cout << "Введите букву";
		cin >> a; cout << endl;
		cout << "Ведите букву";
		cin >> b;
		c = b - a;
		cout << "Разница" << (int)(c) << endl;
		break;
	case 3:
		cout << "Введите цифру";
		cin >> a;
		cout << "Код" << (int)(a) << endl;
		break;
	case 4:
		return 0;
	}
	cout << "Хотите продолжить? (1-да 2-нет)" << endl;
	cin >> f;
	if (f == 1)
		goto ty;
	else
		exit;
	return 0; 
}