#include<iostream>
using namespace std;

int oddsum(int a, int b)
{
	return (a + b)*((b - a) / 2 + 1) / 2;
}

int main()
{
	int m, n;
	cin >> m >> n;
	bool ismeven = m % 2 == 0;
	bool isneven = n % 2 == 0;
	cout << oddsum(m + ismeven, n - isneven);
//	system("pause");
	return 0;
}

