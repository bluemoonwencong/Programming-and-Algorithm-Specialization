#include<iostream>
using namespace std;

int main()
{
	int n = 6, a[6];
	for (int i = 0; i < n; i++) cin >> a[i];
	
	for (int i = 0; i < n; i++)
	{
		int tmp;
		for (int j = 1; j < n - 0; j++)
		{
			bool isOrder = a[j - 1] < a[j];
			bool isLeftEven = a[j - 1] % 2 == 0;
			bool isRightOdd = a[j] % 2 != 0;
			
			if (isOrder && (isLeftEven == !isRightOdd))
			{
				;
			}
			else if (!isOrder && (isLeftEven == !isRightOdd))
			{
				tmp = a[j];
				a[j] = a[j - 1];
				a[j - 1] = tmp;
			}
			else if (isLeftEven && isRightOdd)
			{
				;
			}
			else 
			{
				tmp = a[j];
				a[j] = a[j - 1];
				a[j - 1] = tmp;
			}
		}
	}//两种规则的冒泡排序

//	for (int i = 0; i < n; i++) cout << a[i] << endl;
	if (a[5] - a[0] > 0)
		cout << a[5] - a[0] << endl;
	else
		cout << a[0] - a[5] << endl;
//	system("pause");
	return 0;
}
