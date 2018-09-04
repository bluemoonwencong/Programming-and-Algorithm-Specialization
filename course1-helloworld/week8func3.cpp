#include<iostream>
using namespace std;

int main()
{
	double s[1000], tbike, twalk;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> s[i];

	for (int i = 0; i < n; i++)
	{
		twalk = s[i] / 1.2;
		tbike = s[i] / 3.0 + 50.0;
		if (tbike < twalk)
			cout << "Bike" << endl;
		else if (twalk < tbike)
			cout << "Walk" << endl;
		else
			cout << "All" << endl;
	}
//	system("pause");
	return 0;
}
