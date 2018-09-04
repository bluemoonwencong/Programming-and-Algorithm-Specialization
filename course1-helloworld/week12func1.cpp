#include<iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	if (n % 100 == 0 && n % 400 != 0)
		cout << 'N' << endl;
	else if (n % 3200 == 0)
		cout << 'N' << endl;
	else if (n % 4 == 0)
		cout << 'Y' << endl;
	else
		cout << 'N' << endl;
}


