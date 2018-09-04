#include<iostream>
#include<ctype.h>
using namespace std;

int main()
{
	char a[500];
	bool flag = 0;
	while (cin.getline(a, 500, '.'))
	{
		cout << a << endl;
		int n = strlen(a);
		int lencurrent = 0, lenpre = 0;
		for (int i = 0; i < n; i++)
		{
			if (isalpha(a[i]))
			{
				lencurrent += 1;
			}
			lenpre = lencurrent;
		}
	}

	system("pause");
	return 0;
}

