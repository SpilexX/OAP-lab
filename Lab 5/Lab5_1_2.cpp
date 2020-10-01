#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");
	double m, n, p;
	int i = 0;
	cout << "m = ";
	cin >> m;
	cout << "n = ";
	cin >> n;
	cout << "p = ";
	cin >> p;

	if (m < 0)
		i++;
	if (n < 0)
		i++;
	if (p < 0)
		i++;

	cout << "Количество отрицательных: " << i;
}