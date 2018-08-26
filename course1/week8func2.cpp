#include<iostream>
using namespace std;

int main()
{
	
	int a, x[5], sum = 0;
	cin >> a >> x[0] >> x[1] >> x[2] >> x[3] >> x[4];
	for (int i = 0; i < 5; i++)
	{
		if (x[i] < a)
			sum += x[i];
	}
	cout << sum << endl;
//	system("pause");
	return 0;
}

