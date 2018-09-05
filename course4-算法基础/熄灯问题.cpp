#include<iostream>
using namespace std;

/*
直接枚举次数是2^30，不可行。
需要，需要解析，整个过程有确定的步骤，可以一行行来，使得r行被r+1行操作消灭，这是确定性步骤。
然后只需要枚举第一行的操作。
“局域”
*/
int puzzle[6][8], press[6][8];
bool guess()
{
	int c, r;
	for (r = 1; r <= 5; r++)
		for (c = 1; c <= 6; c++)
			press[r + 1][c] = (puzzle[r][c] + press[r][c] + 
				press[r - 1][c] + press[r][c - 1] + press[r][c + 1]) % 2;
	for (c = 1; c <= 6; c++)
		if ((press[5][c - 1] + press[5][c] + press[5][c + 1] + press[4][c]) % 2 != puzzle[5][c])
			return false;
	return true;
}
void enumerate()
{
	for (int i = 1; i <= 6; i++)
		press[1][i] = 0;
	while (guess() == false)
	{
		press[1][1]++;
		int c = 1;
		while (press[1][c] > 1)
		{
			press[1][c] = 0;
			c++;
			press[1][c]++;
		}
		//cout << "initstate: ";
		//for (int c = 1; c <= 6; c++) cout << press[1][c];
		//cout << endl;
	}
}


int main()
{
	int cases;
	for (int i=0;i<6;i++)
		for (int j=0;j<8;j++)
		{
			puzzle[i][j] = 0;
			press[i][j] = 0;
		}
	cin >> cases;
	for (int count=0; count < cases; count++)
	{
		for (int i = 1; i <= 5; i++)
			for (int j = 1; j <= 6; j++)
				cin >> puzzle[i][j];
		
		enumerate();
		
		cout << "PUZZLE#" << count + 1 << endl;
		for (int i = 1; i <= 5; i++)
		{
			for (int j = 1; j <= 6; j++)
				cout << press[i][j];
			cout << endl;
		}

	}

	system("pause");
	return 0;
}

/*
Input:
 2
 0 1 1 0 1 0
 1 0 0 1 1 1
 0 0 1 0 0 1
 1 0 0 1 0 1
 0 1 1 1 0 0
 0 0 1 0 1 0
 1 0 1 0 1 1
 0 0 1 0 1 1
 1 0 1 1 0 0
 0 1 0 1 0 0

It should be:
 PUZZLE #1
 1 0 1 0 0 1
 1 1 0 1 0 1
 0 0 1 0 1 1
 1 0 0 1 0 0
 0 1 0 0 0 0
 PUZZLE #2
 1 0 0 1 1 1
 1 1 0 0 0 0
 0 0 0 1 0 0
 1 1 0 1 0 1
 1 0 1 1 0 1

*/
