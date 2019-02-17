#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, ".1251");
	cout << "\n\n\tТаблица квадратов нечетных чисел:\n\n";
	int n = 20;
	int k;
	for ( k = 0; k < n; k++)
	{
		if (k % 2 != 0)
		{
			printf("\tквадрат числа %i равен %i\n", k, k*k);
		}
	}
		cout << "\n\n\t";
	system("pause");
}
