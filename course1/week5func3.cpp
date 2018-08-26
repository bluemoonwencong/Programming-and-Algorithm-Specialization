#include<iostream>
using namespace std;

int main()
{
	int k, a[100];
	cin >> k;
	for (int i = 0; i < k; i++)
	{
		cin >> a[i];
	}

	int cout1 = 0, cout5 = 0, cout10 = 0;
	for (int i = 0; i < k; i++)
	{
		if (a[i] == 1)
		{
			cout1 += 1;
		}
		else if (a[i] == 5)
		{
			cout5 += 1;
		}
		else if (a[i] == 10)
		{
			cout10 += 1;
		}
	}
	cout << cout1 << endl;
	cout << cout5 << endl;
	cout << cout10 << endl;
	return 0;
}
