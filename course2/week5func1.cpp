#include<iostream>
#include<ctype.h>
using namespace std;

int main()
{
	int count, m, n, matrix[100][100];
	cin >> count;
	for (int i = 0; i < count; i++)
	{
		cin >> m >> n;
		int sum = 0;
		for (int j = 0; j < m; j++)
			for (int k = 0; k < n; k++)
			{
				int cache = 0;
				cin >> cache;
				if (j == 0 || j == m - 1 || k == 0 || k == n - 1)
					sum += cache;
			}
		cout << sum << endl;
	}

//	system("pause");
	return 0;
}
/*
2 4 4 1 1 1 1 0 0 0 0 1 0 1 0 0 0 0 0 3 3 3 4 1 3 7 1 2 0 1

*/
