#include<iostream>
using namespace std;

int main()
{
	int n, a[100][3];
	double rate[100];
	cin >> n;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < 3; j++)
			cin >> a[i][j];
	for (int i = 0; i < n; i++)
		rate[i] = double(a[i][2]) / double(a[i][1]);

	//	cout << "input:" << endl;
	//	cout << "label\tbefore\tafter\trate" << endl;
	//	for (int i = 0; i < n; i++)
	//	{
	//		for (int j = 0; j < 3; j++)
	//			cout << a[i][j] << " ";
	//		cout << rate[i];
	//		cout << endl;
	//	}//列表打印输入

	for (int i = 0; i < n; i++)
	{
		for (int j = 1; j < n - i; j++)
		{
			int tmpint;
			double tmprate;
			bool isOrder = rate[j - 1] >= rate[j];
			//this is we want
			if (isOrder)
			{
				;
			}
			else
			{
				for (int k = 0; k < 3; k++)
				{
					tmpint = a[j][k];
					a[j][k] = a[j - 1][k];
					a[j - 1][k] = tmpint;
				}
				tmprate = rate[j];
				rate[j] = rate[j - 1];
				rate[j - 1] = tmprate;
			}
		}
	}//冒泡排序

	 // cout << "sort:" << endl;
	 // cout << "label\tbefore\tafter\trate" << endl;
	 // for (int i = 0; i < n; i++)
	 // {
	 // 	for (int j = 0; j < 3; j++)
	 // 		cout << a[i][j] << " ";
	 // 	cout << rate[i];
	 // 	cout << endl;
	 // }//列表打印

	double diff[100];
	diff[n - 1] = 0;
	for (int i = 0; i < n - 1; i++)
		diff[i] = rate[i] - rate[i + 1];
	// for (int i = 0; i < n; i++)
	// 	cout << diff[i] << endl;
	int id = 0;
	double max = diff[0];
	for (int i = 0; i < n; i++)
	{
		if (diff[i] > max)
		{
			max = diff[i];
			id = i;
		}
//		cout << id << max << endl;
	}

	cout << id + 1 << endl;
	for (int i = id; i >= 0; i--) cout << a[i][0] << endl;
	cout << n - id - 1 << endl;
	for (int i = n - 1; i > id; i--) cout << a[i][0] << endl;
	//	system("pause");
	return 0;
}
