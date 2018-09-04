#include<iostream>
using namespace std;

int main()
{
//	cout << (-1 % 10) << endl;
	int n, m;
	int succedent[300], precedent[300];
	while (1)
	{
		cin >> n >> m;
		if (n == 0 && m == 0) break;
		for (int i = 0; i < n; i++)
		{
			succedent[i] = (i + 1) % n;
			precedent[i] = (i - 1 + n) % n;
		}

		int current = 0;
		while (1)
		{
			for (int count = 0; count < m - 1; count++)
				current = succedent[current];
			int pre = precedent[current];
			int suc = succedent[current];
			succedent[pre] = suc;
			precedent[suc] = pre;
			if (pre == suc)
			{
				cout << pre + 1 << endl;
				break;
			}
			current = suc;
		}
	}
	return 0;
}

