﻿#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");
	double h, y, m, j,
		c = 2.1,
		r = 4e-4;
	for (int i = 1; i <= 4; i++)
	{
		cout << "j = ";
		cin >> j;
		for (m = 1; m <= 2; m += 0.5)
		{
			cout << " m = " << m << endl;
			h = (r * 10 - j) / (c * c + exp(-m));
			y = (h * m - j * j) + pow(0.1 * c, 2);
			printf(" h = %lf\n y = %lf\n\n", h, y);
		}
	}
}