#include <stdio.h>
#include <iostream>
using namespace std;

#include <conio.h>

int main()
{
	setlocale(LC_ALL, "Russian");

	int N;

	float x;

	float k;

	float a;

	float S;

	int z;

	cout << "Введите x = \n";

	cin >> x;

	for (N = 5; N <= 20; N += 5)

	{
		k = 1;

		S = 0;

		a = 1;

		z = 1;

		while (k <= N)

		{
			a = a * x / k;

			S = S + z * a;

			k += 1;

			z = -z;
		};

		cout << "При " << k - 1 << "\tслагаемых cумма = " << S << "\n";
	}

	system("PAUSE");
	
}
