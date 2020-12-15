#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Russian");
    const int size = 20;
    int z = 50,
        Az = 0,
        Bz = 0;
    int A[size], B[size];
    cout << "z = " << z << endl;

    for (int i = 0; i < size; i++)
    {
        *(A + i) = rand() % 100; //заполняем рандомом
        if (*(A + i) < z) //считаем значения меньше z
            Az++;
       *(B + i) = rand() % 100;
        if (*(B + i) < z)
            Bz++;
    }

    int *C1, *C2;
    if (Az >= Bz)
    {
        C1 = B;
        C2 = A;
        cout << "Az >= Bz";
    }
    else
    {
        C1 = A;
        C2 = B;
        cout << "Az < Bz";
    }

    cout << endl << "Array #1: ";
    for (int i = 0; i < size; i++)
        cout << *(C1 + i) << ' ';

    cout << endl << "Array #2: ";
    for (int i = 0; i < size; i++)
        cout << *(C2 + i) << ' ';
}