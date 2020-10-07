#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");
	double h, y, j, 
		c = 2.1,
		r = 4e-4,
		m = 7;
	for (int i = 1; i <= 3; i++)
	{
		cout << "j = ";
		cin >> j;
		h = (r * 10 - j) / (c * c + exp(-m));
		y = (h * m - j * j) + pow(0.1 * c, 2);
		printf(" h = %lf\n y = %lf\n", h, y);
	}
}