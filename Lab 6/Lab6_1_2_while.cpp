#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");
	double h, y, 
		j = 0,
		c = 2.1,
		r = 4e-4,
		m = 7;
	while (j < 1.8)
	{
		cout << "j = " << j << endl;
		h = (r * 10 - j) / (c * c + exp(-m));
		y = (h * m - j * j) + pow(0.1 * c, 2);
		printf(" h = %lf\n y = %lf\n", h, y);
		j += 0.1;
	}
}