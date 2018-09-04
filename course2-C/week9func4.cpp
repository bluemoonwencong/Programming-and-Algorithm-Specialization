#include<iostream>
using namespace std;

void myswap(int &a, int &b);
int main()
{
	int n, coor[100][2];
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> coor[i][0] >> coor[i][1];
	for (int i = 0; i<n; i++)
		for (int j = 1; j < n - i; j++)
			if (coor[j - 1][0] > coor[j][0])
			{
				swap(coor[j - 1][0], coor[j][0]);
				swap(coor[j - 1][1], coor[j][1]);
			}
	//按x坐标从小到大排序完毕

	int count = 0, max[100][2], maxy;
	max[count][0] = coor[n - 1][0];
	max[count][1] = coor[n - 1][1];
	maxy = coor[n - 1][1];
	count++;

	for (int i = n - 2; i >= 0; i--)
	{
		if (coor[i][1]>maxy)
		{
			max[count][0] = coor[i][0];
			max[count][1] = coor[i][1];
			count++;
			maxy = coor[i][1];
		}
	}
	for (int i = count - 1; i >= 0; i--)
	{
		cout << '(' << max[i][0] << ',' << max[i][1] << ')';
		if (i > 0) cout << ',';
	}

//	system("pause");
	return 0;
}
/*
5 1 2 2 2 3 1 2 3 1 4


*/

void myswap(int &a, int &b)
{
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
}

