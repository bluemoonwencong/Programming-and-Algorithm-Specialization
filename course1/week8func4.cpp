#include<iostream>
using namespace std;

int main()
{
	int n, k;
	double money, house;
	while (cin >> n >> k)
	{
		house = 200.0;
		for (int i = 1; i <= 20; i++)
		{
			money = n * i;
			house = house * (double(1) + double(i != 1)*double(k) / double(100));
//			cout << i << " " << money << " " << house << endl;
			if (money >= house)
			{
				cout << i << endl;
				break;
			}	
		}
		if (money < house) cout << "Impossible" << endl;
	}

	return 0;
}

