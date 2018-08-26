#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char a[11], b[4], c[14];
	while (cin >> a >> b)
	{
		//		cout << a << b;
		int flag = 0;
		char max = a[0];
		for (int i = 0; a[i] != '\0'; i++)
			if (a[i] > max)
			{
				flag = i;
				max = a[i];
			}
		//		cout << flag << max << endl;
		int len1 = strlen(a), len2 = strlen(b), len = len1 + len2;
		for (int i = 0; i <= flag; i++) c[i] = a[i];
		for (int i = flag + 1; i <= flag + len2; i++) c[i] = b[i - flag - 1];
		for (int i = flag + len2 + 1; i <= len1 + len2; i++) c[i] = a[i - len2];
		cout << c << endl;
	}

//	system("pause");
	return 0;
}


