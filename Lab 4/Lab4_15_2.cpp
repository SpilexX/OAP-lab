#include <iostream>

using namespace std;

int main()
{
	int kv, vsepadiki = 4, vseetazhy = 9, kvnaetazhe = 4;
	cin >> kv;
	int padik = (kv - 1) / (vsepadiki * vseetazhy) + 1;
	int etazh = ((kv - 1) % (vsepadiki * vseetazhy)) / kvnaetazhe + 1;
	cout << "padik = " << padik << endl;
	cout << "etazh = " << etazh << endl;
}