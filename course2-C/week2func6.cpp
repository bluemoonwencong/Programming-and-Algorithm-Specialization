#include<iostream>
using namespace std;

int main()
{
	char matrix[100][100];
	int n, m;
	cin >> n;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> matrix[i][j];

	cin >> m;
	for (int i = 1; i < m; i++)
	{
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
			{
				bool eq1 = matrix[i][j] == '@';
				if (eq1 && (i > 0) && matrix[i - 1][j] == '.') matrix[i - 1][j] = 'f';
				if (eq1 && (i < n - 1) && matrix[i + 1][j] == '.') matrix[i + 1][j] = 'f';
				if (eq1 && (j > 0) && matrix[i][j - 1] == '.') matrix[i][j - 1] = 'f';
				if (eq1 && (j < n - 1) && matrix[i][j + 1] == '.') matrix[i][j + 1] = 'f';
			}
		// 'f' -> '@'
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				if (matrix[i][j] == 'f')
					matrix[i][j] = '@';
/*
		// print matrix
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
				cout << matrix[i][j] << ' ';
			cout << endl;
		}
		// count
		int count = 0;
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				if (matrix[i][j] == '@')
					count += 1;
		cout << count << endl;
*/

	}

	int count = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if (matrix[i][j] == '@')
				count += 1;
	cout << count << endl;

//	system("pause");
	return 0;
}
/*

 5
 ....#
 .#.@.
 .#@..
 #....
 .....
 4

*/
