#include<iostream>
#include<math.h>
using namespace std;

void week6func1()
{
	int n, a[100][3];
	double rate[100];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> a[i][j];
		}
	}
	for (int i = 0; i < n; i++) rate[i] = a[i][2] / a[i][1];

	cout << "input:" << endl;
	cout << "label\tbefore\tafter\rate" << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << rate[i];
		cout << endl;
	}//列表打印输入

	for (int i = 0; i < n; i++)
	{
		for (int j = 1; j < n - i; j++)
		{
			int tmpint;
			double tmprate;
			bool isOrder = rate[j - 1] < rate[j];
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

	double diff[100];
	diff[0] = 0;
	for (int i = 1; i < n; i++)
	{
		diff[i] = rate[i] - rate[i - 1];
	}

	int id = 0;
	double max = rate[0];
	for (int i = 0; i < n; i++)
	{
		if (rate[i] > max)
		{
			max = rate[i];
			id = i;
		}
	}

	cout << id << endl;
	for (int i = 0; i < id; i++) cout << a[i][0] << endl;
	cout << n - id << endl;
	for (int i = id; i < n; i++) cout << a[i][0] << endl;

}

void week6func2()
{
	int n, x, y;
	cin >> n >> x >> y;
	double eat = y / x;
	int last = n - int(eat) - 1;
	if (last < 0) cout << 0;
	cout << last << endl;
}

void week6func3()
{
	int h, r;
	cin >> h >> r;
	double v0 = tanh(0)*r*r*h;
	double number = 20 * 1000 / v0;
	cout << int(number) + 1 << endl;
}

void week6func4()
{
	int n, a[100];
	for (int i = 0; i < n; i++) cin >> a[i];
	int max = a[0];
	for (int i = 1; i < n; i++)
	{
		if (a[i] > max) max = a[i];
	}
	cout << max << endl;
}

void week6func5()
{
	int n = 6, a[6];
	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = 0; i < n; i++)
	{
		int tmp;
		for (int j = 1; j < n - i; j++)
		{
			bool isOrder = a[j - 1] < a[j];
			bool isLeftEven = a[j - 1] % 2 == 0;
			bool isRightOdd = a[i] % 2 != 0;
			if ((isLeftEven &&  isRightOdd) || (isOrder && (isLeftEven == !isRightOdd)))
			{
				;
			}
			else
			{
				tmp = a[j];
				a[i] = a[j - 1];
				a[j - 1] = tmp;
			}
		}
	}//两种规则的冒泡排序
	for (int i = 0; i < n; i++) cout << a[i] << endl;
	cout << a[5] - a[0] << endl;
}


void week6func6()
{
	unsigned long long int n;
	cin >> n;
	int width = 0;
	while (n % (10 ^ width) == n) width++;
	int shatter[100];
	//不知道ULL占用的比特数，但转化为十进制后，想来肯定不会超过100位吧。
	//2^256=10^x, x=256*log(10,2)=256*0.3010=76.8, ULL总不会超过256bit吧。
	for (int i = width; i > 0; i--)
	{
		shatter[width - i] = int(n / (10 ^ i));
		n -= shatter[width - i] * (10 ^ i);
	}
	for (int i = 0; i < width; i++) cout << shatter[i] << endl;
}

