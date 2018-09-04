#include<iostream>
using namespace std;

int main()
{
	int row, col, matrix[100][100];
	cin >> row >> col;
	for (int j = 0; j < row; j++)
		for (int k = 0; k < col; k++)
			cin >> matrix[j][k];

	for (int j = 0; j < col; j++)
	{
		int c_row = 0, c_col = j;
		while (1)
		{
			if (c_row >= row || c_col < 0) break;
			cout << matrix[c_row][c_col] << endl;
			c_row++;
			c_col--;
		}
	}

	for (int i = 1; i < row; i++)
	{
		int c_row = i, c_col = col - 1;
		while (1)
		{
			if (c_row >= row || c_col < 0) break;
			cout << matrix[c_row][c_col] << endl;
			c_row++;
			c_col--;
		}
	}

//	system("pause");
	return 0;
}
/*
12 1 1 2 4 7 3 5 8 10 6 9 11 12

*/
