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

	if (k < 1 || k > 8
		|| m < 1 || m > 8
		|| n < 1 || n > 8
		|| (m == k && n == 1))
	{
		cout << "Error";
	}
	else
	{
		if (abs(k - m) == abs(l - n))
			cout << "Угрожает";
		else
			cout << "Не угрожает";
	}

	cout << endl;
}