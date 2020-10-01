#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");
	int k, l = 1, m, n;
	cout << "k = ";
	cin >> k;
	cout << "m = ";
	cin >> m;
	cout << "n = ";
	cin >> n;

	//todo: проверку недопустимых значений

	if (abs(k - m) == abs(l - n))
		cout << "Угрожает";
	else
		cout << "Не угрожает";

	cout << endl;
}