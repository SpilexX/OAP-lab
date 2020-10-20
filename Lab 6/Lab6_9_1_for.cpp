#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");
	double y, h, c,
		s = 5.9,
		f = 1.2e3,
		m = 6;
	for (int i = 1; i <= 3; i++)
	{
		cout << "c = ";
		cin >> c;
		y = (s + c) / log(f) / exp(-5);
		h = (y - m) / log(y);
		printf(" y = %lf\n h = %lf\n", y, h);
	}
}