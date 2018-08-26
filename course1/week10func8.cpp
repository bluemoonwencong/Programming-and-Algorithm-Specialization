#include<iostream>
using namespace std;

int main()
{
	int l, m, x[100][2], list[10000], sum = 0;
	cin >> l >> m;
	for (int i = 0; i < l + 1; i++) list[i] = 1;
	for (int i = 0; i < m; i++)
	{
		cin >> x[i][0] >> x[i][1];
		for (int j = x[i][0]; j <= x[i][1]; j++)
			list[j] = 0;
	}
	for (int i = 0; i < l + 1; i++)
	{
		sum += list[i];
		//		cout << "i:" << i << " list[i]:" << list[i] << " sum:" << sum << endl;
	}
	cout << sum << endl;
//	system("pause");
	return 0;
}

// 500 3 150 300 100 200 470 471

// 500 3 100 200 150 160 180 190

