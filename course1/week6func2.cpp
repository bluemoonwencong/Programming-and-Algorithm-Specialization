#include<iostream>
using namespace std;

int main()
{

	int n, x, y;
	cin >> n >> x >> y;
	double eat = double(y) / double(x);
	int last;
	if (eat == int(eat))
		last = n - int(eat);
	else
		last = n - int(eat) - 1;
	if (last < 0)
		cout << 0;
	else
		cout << last << endl;
//	system("pause");
	return 0;
}
