#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");
	double d;
	cout << "d = ";
	cin >> d;
	cout << "Сторона квадрата a = " << d / sqrt(2);
}