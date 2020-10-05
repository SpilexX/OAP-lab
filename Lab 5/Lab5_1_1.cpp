#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");
	double x, y, z, t;
	cout << "Введите данные:" << endl;
	cout << "x = ";
	cin >> x;
	cout << "y = ";
	cin >> y;
	cout << "z = ";
	cin >> z;

	if (x < y)
	{
		t = x;
		x = y;
		y = t;
	}

	if (y < z)
	{
		t = y;
		y = z;
		z = t;
	}

	if (x < y)
	{
		t = x;
		x = y;
		y = t;
	}

	cout << endl << "В отсортированном виде от большего к меньшему:" << endl;
	cout << "x = " << x << ", y = " << y << ", z = " << z;
}