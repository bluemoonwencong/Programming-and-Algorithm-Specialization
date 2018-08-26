#include<iostream>
using namespace std;

int ss(int x);
int main()
{
	int n;
	cin >> n;
	for (int t = 10; t <= n; t++)
		if (t%ss(t) == 0) cout << t << endl;
//	system("pause");
	return 0;
}
int ss(int x)
{
	int w100 = x / 100;
	x -= w100 * 100;
	int w10 = x / 10;
	x -= w10 * 10;
	int w1 = x / 1;
	return w100 + w10 + w1;
}
