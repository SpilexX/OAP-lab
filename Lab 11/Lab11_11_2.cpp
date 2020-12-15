#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Russian");
    int A, B, p, n, m, q;
    char tmp[33];
    cout << "Введите A: ";
    cin >> A;
    cout << "Введите B: ";
    cin >> B;
    cout << "A = ";
    _itoa_s(A, tmp, 2);
    cout << tmp << endl;
    cout << "B = ";
    _itoa_s(B, tmp, 2);
    cout << tmp << endl;
    cout << "Введите начальную позицию A: ";
    cin >> p;
    cout << "Введите число битов A: ";
    cin >> n;
    cout << "Введите начальную позицию B: ";
    cin >> q;
    cout << "Введите число битов B: ";
    cin >> m;

    int maskA = pow(2, n) - 1;
    maskA <<= p - 1;
    _itoa_s(maskA, tmp, 2);
    cout << "Маска для A: " << tmp << endl;
    _itoa_s(A & ~maskA, tmp, 2);
    cout << "Очищены биты в A: " << tmp << endl;
    _itoa_s((A & maskA) >> (p - 1), tmp, 2);
    cout << "Выделенные биты A: " << tmp << endl;

    int maskB = pow(2, m) - 1;
    maskB <<= q - 1;
    _itoa_s(maskB, tmp, 2);
    cout << "Маска для B: " << tmp << endl;
    _itoa_s(B & ~maskB, tmp, 2);
    cout << "Очищены биты в B: " << tmp << endl;
    _itoa_s((B & ~maskB) | ((A & maskA) >> (p - 1) - (q - 1)), tmp, 2);
    cout << "Результат B: " << tmp << endl;

}