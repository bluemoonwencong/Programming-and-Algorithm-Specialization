#include<iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int n100 = n / 100;
	n -= n100 * 100;
	int n50 = n / 50;
	n -= n50 * 50;
	int n20 = n / 20;
	n -= n20 * 20;
	int n10 = n / 10;
	n -= n10 * 10;
	int n5 = n / 5;
	n -= n5 * 5;
	int n1 = n / 1;
	n -= n1 * 1;

	cout << n100 << endl;
	cout << n50 << endl;
	cout << n20 << endl;
	cout << n10 << endl;
	cout << n5 << endl;
	cout << n1 << endl;
//	system("pause");
	return 0;
}