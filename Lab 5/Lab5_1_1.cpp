#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");
	double x, y, z;
	cout << "x = ";
	cin >> x;
	cout << "y = ";
	cin >> y;
	cout << "z = ";
	cin >> z;

	if (x < y)
		swap(x, y);
	if (y < z)
		swap(y, z);
	if (x < y)
		swap(x, y);

	cout << "\nВ отсортированном виде от большего к меньшему:\n";
	cout << "x = " << x << ", y = " << y << ", z = " << z;
}