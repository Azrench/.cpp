#include "pch.h"
#include <string>
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, ".1251");
	string i;
	cout << "Как Вас зовут?\n";
	cout << "Введите своё имя и фамилию, затем нажмите Enter.\n";
	getline(cin, i);
	cout << "...\n\n";
	setlocale(LC_ALL, ".866");
	for (int k = 0; k < 10; k++)
	{
		cout << i << ".\n";
	}
	system("pause");
	return 0;
}
