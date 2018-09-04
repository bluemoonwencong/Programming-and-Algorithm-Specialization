#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;

int main()
{
	int n;
	double coordinate[10000][2];
	double distance = 0.0, max = 0.0;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> coordinate[i][0] >> coordinate[i][1];
	
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			distance = sqrt(pow(coordinate[i][0] - coordinate[j][0], 2) + pow(coordinate[i][1] - coordinate[j][1], 2));
			if (distance > max) max = distance;
		}
	}
	
	cout << fixed << setprecision(4) << max << endl;
//	system("pause");
	return 0;
}

// 6 34.0 23.0 28.1 21.6 14.7 17.1 17.0 27.2 34.7 67.1 29.3 65.1

