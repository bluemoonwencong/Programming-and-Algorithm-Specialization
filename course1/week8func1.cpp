#include<iostream>
using namespace std;

int main()
{
	
	for (int best = 1; best <= 4; best++)
	{
		bool a = best == 2;
		bool b = best == 4;
		bool c = !(best == 3);
		bool d = !(best == 4);
		if (a + b + c + d == 1)
		{
			cout << best << endl;
			if (a == 1) cout << 'A' << endl;
			else if (b == 1) cout << 'B' << endl;
			else if (c == 1) cout << 'C' << endl;
			else if (d == 1) cout << 'D' << endl;
		}
			
	}
//	system("pause");
	return 0;
}

