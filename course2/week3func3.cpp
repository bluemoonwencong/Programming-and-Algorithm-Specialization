#include<iostream>
#include<ctype.h>
using namespace std;

int main()
{
	char seq[100] = { '\0' };
	cin.getline(seq,100);
	cout << seq << endl;
//	for (int i = 0; i < 50; i++)
//		cout << seq[i] << ",";
//	cout << endl;
	char m = seq[0];
	int n = strlen(seq);

	int record[100];
	for (int i = 0; i < 100; i++) record[i] = 0;
	int pair[50][2];

	for (int i = 1; i < n; i++)
	{
		bool bound1 = seq[i - 1] == m;
		bool bound2 = seq[i - 1] != seq[i];
		bool bound3 = record[i] != 1;
		if ( bound1 && bound2 && bound3)
		{
			cout << i - 1 << ' ' << i << endl;
			record[i] = 1;
			record[i - 1] = 1;
		}
	}



	system("pause");
	return 0;
}


