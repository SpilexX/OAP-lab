#include <iostream>
using namespace std;

int main()
{
	string s = "abc   cde def  !??!<< >> 1233 3231  ";
	int i = 0, m;

	while (s[i] != '\0') // '\0' - служебный символ конца строки
	{
		m = i + 1;
		while (s[m] != '\0')
		{
			if (s[i] == s[m])
				s.erase(m, 1);
			else
				m++;
		}
		i++;
	}

	cout << s << "\n";
}