#include<iostream>
using namespace std;

int main()
{
	double h, r;
	cin >> h >> r;
	double v0 = 3.14159265*r*r*h;
	double number = 20 * 1000 / v0;
	cout << int(number) + 1 << endl;
	return 0;
}
