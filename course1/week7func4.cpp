#include<iostream>
using namespace std;

int main()
{
	int a;
	cin >> a;

	if (95 <= a && a <= 100)
		cout << 1 << endl;
	else if (90 <= a && a < 95)
		cout << 2 << endl;
	else if (85 <= a && a < 90)
		cout << 3 << endl;
	else if (80 <= a && a < 85)
		cout << 4 << endl;
	else if (70 <= a && a < 80)
		cout << 5 << endl;
	else if (60 <= a && a < 70)
		cout << 6 << endl;
	else
		cout << 7 << endl;
	return 0;
}