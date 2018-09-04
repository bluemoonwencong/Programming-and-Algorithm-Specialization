#include<iostream>
#include<iomanip>
using namespace std;

void myswap(int &a, int &b);
void myswap(double &a, double &b);
int main()
{
	int m, number[50];
	double a, status[50];
	cin >> m >> a;
	for (int i = 0; i < m; i++)
		cin >> number[i] >> status[i];
//	for (int i = 0; i < m; i++)
//		cout << number[i] << ',' << status[i] << endl;

	for (int i=0;i<m;i++)
	{
		
		for (int j = 1; j < m - i; j++)
		{
			if (status[j - 1] > status[j])
			{
				myswap(status[j - 1], status[j]);
				myswap(number[j - 1], number[j]);
			}
		}
		if (status[m - 1 - i] < a) break;
	}

	if (status[m - 1] < a)
	{
		cout << "None." << endl;
		return 0;
	}

	for (int i = m - 1; i >= 0; i--)
	{
		if (status[i] > a)
		{
			cout << setfill('0') << setw(3) << number[i] << ' ';
			cout << fixed << setprecision(1) << status[i] << endl;
		}
	}

//	system("pause");
	return 0;
}
/*
10 7.55 006 6.5 005 8.0 004 3.5 009 8.5 011 7.0 043 9.5 003 5.0 103 6.0 112 4.0 118 9.0

*/


void myswap(int &a, int &b)
{
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
}
void myswap(double &a, double &b)
{
	double tmp;
	tmp = a;
	a = b;
	b = tmp;
}
