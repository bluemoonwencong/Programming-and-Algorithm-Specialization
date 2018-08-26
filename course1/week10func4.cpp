#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int a, b, matrix[5][5];
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cin >> matrix[i][j];
		}
	}

	cin >> a >> b;
	if (a < 0 || a>4 || b < 0 || b>4)
	{
		cout << "error" << endl;
//		system("pause");
		return 0;
	}
	
	int tmp;
	for (int i = 0; i < 5; i++)
	{
		tmp = matrix[a][i];
		matrix[a][i] = matrix[b][i];
		matrix[b][i] = tmp;
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << setw(4) << matrix[i][j];
		}
		cout << endl;
	}

//	system("pause");
	return 0;
}

// 1 2 2 1 2 5 6 7 8 3 9 3 0 5 3 7 2 1 4 6 3 0 8 2 4
// 0 4
// 1 2 2 1 2 5 6 7 8 3 9 3 0 5 3 7 2 1 4 6 3 0 8 2 4
// 5 1

