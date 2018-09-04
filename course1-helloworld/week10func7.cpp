#include<iostream>
using namespace std;

int main()
{
	int n, a[15000], tmp;
	
	
	while (cin >> n)
	{
		if (n == 0) break;
		for (int i = 0; i < n; i++) cin >> a[i];

		for (int i = 0; i < n; i++)
		{
			for (int j = 1; j < n - i; j++)
			{
				if (a[j] > a[j - 1])
				{
					tmp = a[j];
					a[j] = a[j - 1];
					a[j - 1] = tmp;
				}
			}
		}
//		for (int i = 0; i < n; i++) cout << a[i] << ',';

		if (n % 2 == 0)
			cout << (a[n / 2] + a[n / 2 - 1]) / 2 << endl;
		else
			cout << a[(n + 1) / 2 - 1] << endl;
	}
//	system("pause");
	return 0;
}

