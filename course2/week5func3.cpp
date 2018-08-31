#include<iostream>
#include<string.h>
using namespace std;


int main()
{
	int words = 0, sum = 0;
	cin >> words;
	char str[41] = { 0 };
	for (int i = 0; i < words; i++)
	{
		cin >> str;
		if (sum + strlen(str) + 1 > 80)
		{
			cout << endl;
			sum = 0;
		}
		else if (i > 0) { cout << ' '; sum++; }
		cout << str;
		sum = sum + strlen(str);

	}

//	system("pause");
	return 0;
}
