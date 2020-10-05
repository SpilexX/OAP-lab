#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");
	char c, sp = ' ';
	cout << "Введите символ: ";
	cin >> c;
	cout << endl;
	cout << setw(12) << setfill(sp) << sp;
	cout << setw(12) << setfill(c) << c << endl;
	cout << setw(8) << setfill(sp) << sp;
	cout << setw(20) << setfill(c) << c << endl;
	cout << setw(6) << setfill(sp) << sp;
	cout << setw(24) << setfill(c) << c << endl;
	cout << setw(4) << setfill(sp) << sp;
	cout << setw(28) << setfill(c) << c << endl;
	cout << setw(2) << setfill(sp) << sp;
	cout << setw(32) << setfill(c) << c << endl;
	cout << setw(2) << setfill(sp) << sp;
	cout << setw(32) << setfill(c) << c << endl;
	cout << setw(36) << setfill(c) << c << endl;
	cout << setw(36) << setfill(c) << c << endl;
	cout << setw(36) << setfill(c) << c << endl;
}