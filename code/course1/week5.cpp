#include<iostream>
using namespace std;

void week5func1()
{
	int input = 0;
	cin >> input;
	cout << "input:" << input << endl;
	if (input == 1 || input == 3 || input == 5)
	{
		cout << "No!" << endl;
	}
	else
	{
		cout << "YES!" << endl;
	}
}

void week5func2()
{
	int m, n;
	cin >> m >> n;
	int s = (n + m)*(n - m + 1) / 2;
	if (n % 2 == 0)
	{
		s -= n;
	}
	if (m % 2 == 0)
	{
		s -= m;
	}
	//这个时候就不能用 else if 了！因为两种情况可能同时发生，
	//而 if...else if...else只对应那种"只能单次发生"情况
	cout << "output:" << s << endl;
}

void week5func3()
{
	int k, a[100];
	cin >> k;
	for (int i = 0; i < k; i++)
	{
		cin >> a[i];
	}
	cout << "output: ";
	for (int i = 0; i < k; i++)
	{
		cout << a[i] << ", ";
	}
	cout << endl;

	int cout1 = 0, cout5 = 0, cout10 = 0;
	for (int i = 0; i < k; i++)
	{
		if (a[i] == 1)
		{
			cout1 += 1;
		}
		else if (a[i] == 5)
		{
			cout5 += 1;
		}
		else if (a[i] == 10)
		{
			cout10 += 1;
		}
	}
	cout << "cout1:" << cout1 << endl;
	cout << "cout5:" << cout5 << endl;
	cout << "cout10:" << cout10 << endl;
}

void week5func4()
{
	int n, cc;
	cin >> n;
	cout << "input:" << n << endl;


	cout << "the number 1 in binary:" << cc << endl;
}
//这道题的解法就是反复地除以2，看最低位是1还是0
//有些知道位运算的同学喜欢用位运算，但其实没必要，因为编译器优化之后的程序其实效率是一样的

void week5func5()
{
	int n, a[100];
	int n, a[100];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	cout << "output: ";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << ", ";
	}
	cout << endl;

	int b[100];
	for (int i = 0; i < n; i++)
	{
		b[n - i] = a[i];
	}
	for (int i = 0; i < n; i++)
	{
		cout << b[i] << " ";
	}
}

