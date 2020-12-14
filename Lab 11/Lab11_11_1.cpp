#include <iostream> 
using namespace std;
int main()
{
	int A; 
	char tmp[33];
	cout << "Vvedite chislo: ";
	cin >> A;
	_itoa_s(A, tmp, 2);
	cout << "A v dvoichnom vide = " << tmp << endl;
	if ((A & 15) == 0)
		cout << "Chislo kratno 16" << endl;
	else
		cout << "Chislo ne kratno 16" << endl;
}