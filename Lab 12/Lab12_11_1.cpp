#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Russian");
    int i, n;
    cout << "Введите n = ";
    cin >> n;
    bool* A = new bool[n+1]; 
    //по-умолчанию все элементы такого массива равны true (205)
        
    for (i = 0; i < n; i++)
    {
        int k;
        cout << "Введите натуральное число: ";
        cin >> k;
        *(A + k) = 1;
    }

    for (i = 1; i <= n; i++)
    {
        if (*(A + i) != 1)
            break;
    }
    cout << "Отсутствующий элемент: " << i;
}