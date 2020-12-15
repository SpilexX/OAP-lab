#include<iostream>
int main() 
{   using namespace std;
    setlocale(LC_CTYPE, "Russian");
    int size, Del_Num; 
    int Col = 0;
    int Even_Num = 0; 
    cout << "Введите размерность массива: ";
    cin >> size;
    int* mass = new int[size]; 
    
    for (int i = 0; i < size; i++) {
        mass[i] = rand() % 99;
    }
    cout << "Сформированный массив: ";

    for (int i = 0; i < size; i++) {
        cout << mass[i] << " ";
    }
    cout << "\n" << "Какое число удалить?" << "\n";
    cin >> Del_Num;

    for (int i = 0; i < size; i++) {
           if (mass[i] == Del_Num) {
            Col++;
        }
           if (mass[i] % 2 == 0 && mass[i] != Del_Num) {
            Even_Num++;
        }
    }
    int* New_Mass = new int[size - Col + Even_Num];
    int j = 0;
       for (int i = 0; i < size; i++) {
        if (mass[i] != Del_Num) {
            if (mass[i] % 2 == 0) {
                New_Mass[j++] = 1;
            }
            New_Mass[j++] = mass[i];
        }
    }
    delete[]mass;
    mass = New_Mass; 
    for (int i = 0; i < size - Col + Even_Num; i++) {
        cout << mass[i] << " ";
    }
    delete[] mass;
    cout << endl;
}