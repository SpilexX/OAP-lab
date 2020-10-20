#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");
	double y, h, c,	s,
		f = 1.2e3,
		m = 6;
	for (int i = 1; i <= 3; i++)
	{
		cout << "s = ";
		cin >> s;
		c = 0.2;
		while (c <= 0.5)
		{
			cout << "  c = " << c << endl;
			y = (s + c) / log(f) / exp(-5);
			h = (y - m) / log(y);
			cout << "    y = " << y << endl;
			cout << "    h = " << h << endl;
			c += 0.1;
		}
	}
}