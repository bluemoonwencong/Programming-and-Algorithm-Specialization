#include<iostream>
#include<iomanip>
using namespace std;


int char2int(char x) {
	if (x == 'A') return 0;
	if (x == 'B') return 1;
	if (x == 'C') return 2;
}
char int2char(int x) {
	if (x == 0) return 'A';
	if (x == 1) return 'B';
	if (x == 2) return 'C';
}
int main()
{
	int human, n;
	char p;
	double m, matrix[3][3] = { {0,0,0},{ 0,0,0 },{ 0,0,0 } };
	for (int i = 0; i < 3; i++)
	{
		cin >> human >> n;
		for (int j = 0; j < n; j++)
		{
			cin >> p >> m;
			matrix[human - 1][char2int(p)] += m;
		}
	}
	
/*
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << matrix[i][j] << ' ';
		}
		cout << endl;
	}//print matrix
*/

	double sum;
	for (int i = 0; i < 3; i++)
	{
		sum = 0;
		for (int j = 0; j < 3; j++)
		{
			sum += matrix[i][j];
		}
		cout << (i + 1) << ' ' << fixed << setprecision(2) << sum << endl;
	}

	for (int i = 0; i < 3; i++)
	{
		sum = 0;
		for (int j = 0; j < 3; j++)
		{
			sum += matrix[j][i];
		}
		cout << int2char(i) << ' ' << fixed << setprecision(2) << sum << endl;
	}

//	system("pause");
	return 0;
}

// 1 5 A 1.0 A 2.0 C 1.0 B 1.0 C 1 3 3 B 1 C 2 C 1 2 4 B 1 A 1 C 1 A 1
