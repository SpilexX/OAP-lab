#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");
	double d;
	printf("d = ");
	scanf_s("%lf", &d);
	printf("Площадь квадрата S = %lf", d * d / 2);
}