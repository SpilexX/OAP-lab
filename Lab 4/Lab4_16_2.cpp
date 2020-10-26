#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	double v, v1, v2, v3, v4, v5;
	cout << "Введите средние скорости:" << endl;
	cout << "v1 = ";
	cin >> v1;
	cout << "v2 = ";
	cin >> v2;
	cout << "v3 = ";
	cin >> v3;
	cout << "v4 = ";
	cin >> v4;
	cout << "v5 = ";
	cin >> v5;
	v = 5 / (1 / v1 + 1 / v2 + 1 / v3 + 1 / v4 + 1 / v5);
	cout << "Общая средняя скорость v = " << v;
}