#include <iostream>
using namespace std;

int main()
{
	int size = 15, //размер массива
		f = 0;
	int* arr = new int[size];

	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 100;	//заполнили
		cout << arr[i] << " ";	//вывели на экран
		if (arr[i] % 2 == 1 && f < 5) //посчитали кол-во нечетных
			f++;
	}

	//новый массив с новым размером
	int newSize = size - f + 3; 
	int* newArr = new int[newSize]; 

	int k = 0, n = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] % 2 == 1 && k < f) {
			k++;
			continue; //пропускаем первые 5 нечетных значениий
		}
		newArr[n] = arr[i]; //все остальные копируем
		n++;
	}

	//заполняем 3 последних элемента нулями
	for (int n = newSize - 3; n < newSize; n++)
		newArr[n] = 0;

	//вывод полученного
	cout << endl;
	for (int i = 0; i < newSize; i++) {
		cout << newArr[i] << " ";
	}
}