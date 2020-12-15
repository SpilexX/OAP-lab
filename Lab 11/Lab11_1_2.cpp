#include <iostream>
using namespace std;

/*
*	Инвертировать в числе А n битов вправо от позиции p, 
*	заменить ими m битов числа В, начиная с позиции q.
*/

int main()
{
	setlocale(LC_CTYPE, "Russian");
	int A, B, p, n, q, m;
	char tmp[33];
	cout << "введите A "; cin >> A;
	cout << "введите B "; cin >> B;
	cout << "A = ";	_itoa_s(A, tmp, 2);
	cout << tmp << endl;
	cout << "B = ";	_itoa_s(B, tmp, 2);
	cout << tmp << endl;
	cout << "введите нач. позицию A "; cin >> p;
	cout << "введите кол-во битов A "; cin >> n;
	cout << "введите нач. позицию B "; cin >> q;
	cout << "введите кол-во битов B "; cin >> m;

	int Amask = pow(2, n) - 1;
	Amask <<= p - n;
	_itoa_s(Amask, tmp, 2);
	cout << "маска для A: " << tmp << endl;
	_itoa_s(A & ~Amask, tmp, 2);
	cout << "очищены биты в A: " << tmp << endl;
	_itoa_s((A & Amask) >> (p - n), tmp, 2);
	cout << "выделенные биты A: " << tmp << endl;
	_itoa_s(((~A & Amask) >> (p - n)), tmp, 2);
	cout << "инвертир. от A: " << tmp << endl;

	int Bmask = pow(2, m) - 1;
	Bmask <<= q - m;
	_itoa_s(Bmask, tmp, 2);
	cout << "маска для B: " << tmp << endl;
	_itoa_s(B & ~Bmask, tmp, 2);
	cout << "очищены биты в B: " << tmp << endl;
	_itoa_s((B & ~Bmask) | ((~A & Amask) >> (p - n - 1)), tmp, 2);
	cout << "результат B: " << tmp << endl;
}