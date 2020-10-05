#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");
	double a, b, p, q, r, s, x, y;

	cout << "Введите данные:" << endl;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "p = ";
	cin >> p;
	cout << "q = ";
	cin >> q;
	cout << "r = ";
	cin >> r;
	cout << "s = ";
	cin >> s;
	
	x = min(p, q) + min(r, s);
	y = max(max(p, q), max(r, s));

	if ((x <= a && y <= b) || (y <= a && x <= b))
		cout << "Можно построить 2 дома";
	else
		cout << "Нельзя построить 2 дома";
}