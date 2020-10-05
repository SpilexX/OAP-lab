#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");
	double m, n, p;
	cout << "Введите данные:" << endl;
	cout << "m = ";
	cin >> m;
	cout << "n = ";
	cin >> n;
	cout << "p = ";
	cin >> p;

	int i = 0;

	if (m < 0)
		i++; // i = i + 1;
	if (n < 0)
		i++;
	if (p < 0)
		i++;

	cout << "Количество отрицательных: " << i;
}