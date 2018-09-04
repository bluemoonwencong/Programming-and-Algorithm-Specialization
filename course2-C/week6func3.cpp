#include<iostream>
using namespace std;

int main()
{
	int m, n, matrix[20][20];
	cin >> m >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> matrix[i][j];


	for (int i=0;i<m;i++)
		for (int j = 0; j < n; j++)
		{
			bool up, down, left, right;
			up = down = left = right = 1;
			if (i - 1 >= 0)
				up = matrix[i][j] >= matrix[i - 1][j];
			if (i + 1 < m)
				down  = matrix[i][j] >= matrix[i + 1][j];
			if (j - 1 >= 0)
				left = matrix[i][j] >= matrix[i][j - 1];
			if (j + 1 < n)
				right = matrix[i][j] >= matrix[i][j + 1];
			if (up&&down&&left&&right)
				cout << i << ' ' << j << endl;
		}

//	system("pause");
	return 0;
}
/*
10 5 0 76 81 34 66 1 13 58 4 40 5 24 17 6 65 13 13 76 3 20 8 36 12 60 37 42 53 87 10 65 42 25 47 41 33 71 69 94 24 12 92 11 71 3 82 91 90 20 95 44

*/
