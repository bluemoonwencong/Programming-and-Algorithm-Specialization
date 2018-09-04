#include<iostream>
using namespace std;

int main()
{
	int n, m, a[1000], tmp;
	cin >> n >> m;
	for (int i = 0; i < n; i++) cin >> a[i];

	for (int i = 0; i < m; i++)
	{
		tmp = a[n - 1];
		for (int j = n-1; j >0; j--)
		{
			a[j] = a[j - 1];
		}
		a[0] = tmp;
	}
	for (int i = 0; i < n; i++) cout << a[i] << " ";
//	system("pause");
	return 0;
}


