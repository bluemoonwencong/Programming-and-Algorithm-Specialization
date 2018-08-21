#include<iostream>
using namespace std;

void week4func1()
{
	int n, a[1000];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	
	cout << "input: ";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << ", ";
	}
	cout << endl;

	for (int i = 0; i < n; i++)
	{
		for (int j = 1; j < n - i; j++)
		{
			int tmp = 0;
			if (a[j - 1] < a[j])
			{
				;
			}
			else
			{
				tmp = a[j];
				a[j] = a[j - 1];
				a[j - 1] = tmp;
			}
		}
	}

	cout << "output: ";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << ", ";
	}
	cout << endl;
}

void week4func2()
{
	int a[10];
//	cin >> n;
	int n = 10;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	cout << "input: ";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << ", ";
	}
	cout << endl;

	for (int i = 0; i < n; i++)
	{
		for (int j = 1; j < n - i; j++)
		{
			int tmp = 0;
			bool isOrder = a[j - 1] < a[j];
			bool isleftEven = a[j - 1] % 2 == 0;
			bool isrightEven = a[j] % 2 == 0;
			if ((!isleftEven && isrightEven)||(isOrder && isleftEven == isrightEven))
			{
				;
			}
			else
			{
				tmp = a[j];
				a[j] = a[j - 1];
				a[j - 1] = tmp;
			}
		}
	}

	cout << "output: ";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << ", ";
	}
	cout << endl;
}
