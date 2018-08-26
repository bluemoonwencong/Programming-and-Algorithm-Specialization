#include<iostream>
using namespace std;

int main()
{
	int n;
	while (cin >> n)
	{
		bool z3 = n % 3 == 0;
		bool z5 = n % 5 == 0;
		bool z7 = n % 7 == 0;
		if (z3)
			cout << 3 << ' ';
		if (z5)
			cout << 5 << ' ';
		if (z7)
			cout << 7 << ' ';
		if (z3 + z5 + z7 == 0) cout << 'n' << endl;
		cout << endl;
	}
//	system("pause");
	return 0;
}


