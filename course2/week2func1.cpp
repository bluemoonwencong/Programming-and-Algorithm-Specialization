#include<iostream>
using namespace std;

int main()
{
	int n, a[100];
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i<n; i++)
		if (a[i] == i)
		{
			cout << i << endl;
			return 0;
		}
	cout << 'N' << endl;
//	system("pause");
	return 0;
}

