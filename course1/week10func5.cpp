#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int n, matrix[100][100];
	cin >> n;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> matrix[i][j];
	int count = 0;
	for (int i = 1; i < n - 1; i++)
	{
		for (int j = 1; j < n - 1; j++)
		{
			bool up    = matrix[i - 1][j] - matrix[i][j] >= 50;
			bool down  = matrix[i + 1][j] - matrix[i][j] >= 50;
			bool left  = matrix[i][j - 1] - matrix[i][j] >= 50;
			bool right = matrix[i][j + 1] - matrix[i][j] >= 50;
			if (up&&down&&left&&right) count += 1;
		}
	}
	cout << count << endl;
//	system("pause");
	return 0;
}

// 4 70 70 70 70 70 10 70 70 70 70 20 70 70 70 70 70

