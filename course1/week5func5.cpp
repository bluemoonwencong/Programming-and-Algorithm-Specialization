#include<iostream>
using namespace std;

int main()
{
	int n, a[100];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	int b[100];
	for (int i = 0; i < n; i++)
	{
		b[n - i - 1] = a[i];
	}
	for (int i = 0; i < n; i++)
	{
		cout << b[i] << " ";
	}
	return 0;
}
