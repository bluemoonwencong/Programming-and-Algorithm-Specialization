#include<iostream>
using namespace std;

int main()
{
	int n, k, x[1000], tmp;
	cin >> n >> k;
	for (int i = 0; i < n; i++)
		cin >> x[i];
	for (int i = 0; i < k; i++)
	{
		for (int j = 1; j < n - i; j++)
		{
			if (x[j - 1] > x[j])
			{
				tmp = x[j];
				x[j] = x[j - 1];
				x[j - 1] = tmp;
			}
		}
	}
	cout << x[n - k] << endl;
	return 0;
}