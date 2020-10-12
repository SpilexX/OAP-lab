#include <iostream>

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
		m = 1;
		while (m <= 2)
		{
			cout << " m = " << m << endl;
			h = (r * 10 - j) / (c * c + exp(-m));
			y = (h * m - j * j) + pow(0.1 * c, 2);
			cout << " h = " << h << endl;
			cout << " y = " << y << endl << endl;
			m += 0.5;
		}
	}
}