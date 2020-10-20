#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");
	double y, h,
		c = 0,
		s = 5.9,
		f = 1.2e3,
		m = 6;
	while (c <= 0.9)
	{
		cout << "c = " << c << endl;
		y = (s + c) / log(f) / exp(-s);
		h = (y - m) / log(y);
		printf(" y = %lf\n h = %lf\n", y, h);
		c += 0.1;
	}
}