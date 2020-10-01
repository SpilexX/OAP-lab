#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");
	int a, b, c, sum = 0;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "c = ";
	cin >> c;

	sum += ((a % 5 == 0) ? a : 0);
	sum += ((b % 5 == 0) ? b : 0);
	sum += ((c % 5 == 0) ? c : 0);

	/*
	if (a % 5 == 0)
		sum += a;
	if (b % 5 == 0)
		sum += b;
	if (c % 5 == 0)
		sum += c;
	*/

	cout << "Сумма: " << sum;
}