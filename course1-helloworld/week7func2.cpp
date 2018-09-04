#include<iostream>
using namespace std;

int mygcd(int a, int b);
int main()
{
	int n;
	cin >> n;
	int q = 0, p = 1;

	while (n--)
	{
		int a, b;
		char eat;
		cin >> a >> eat >> b;
		q = q * b + a * p;
		p = p * b;
	}//读取完毕

	int gcd = mygcd(q, p);
	q /= gcd;
	p /= gcd;
	if (p > 1)
		cout << q << "/" << p << endl;
	else
		cout << q << endl;
//	system("pause");
	return 0;
}

int mygcd(int a, int b)
{
	int tmp;
	while (b%a != 0)
	{
		if (a > b)
		{
			tmp = a;
			a = b;
			b = tmp;
		}
		b = b % a;
	}
	return a;
}//greatest common divisor
