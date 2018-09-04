#include<iostream>
using namespace std;

int main()
{
	int n, a[10];
//	cin >> n;
	n = 10;
	for (int i = 0; i < n; i++) cin >> a[i];

	for (int i = 0; i < n; i++)
	{
		for (int j = 1; j < n - i; j++)
		{
			int tmp = 0;
			bool isOrder = a[j - 1] < a[j];
			bool isleftEven = a[j - 1] % 2 == 0;
			bool isrightEven = a[j] % 2 == 0;
			if ((!isleftEven && isrightEven) || (isOrder && isleftEven == isrightEven))
				;
			else
			{
				tmp = a[j];
				a[j] = a[j - 1];
				a[j - 1] = tmp;
			}
		}
	}
	for (int i = 0; i < n; i++) cout << a[i] << ' ';
	return 0;
}
