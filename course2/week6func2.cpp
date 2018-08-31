#include<iostream>
using namespace std;

char mypair(char);
int mystrlen(char x[])
{
	int i = 0;
	while (x[i] != '\0')
	{
		i++;
	}
	return i;
}
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i<n; i++)
	{
		char dna[256] = { '\0' };
		cin >> dna;
		int length = mystrlen(dna);
		for (int i = 0; i < length; i++)
		{
			cout << mypair(dna[i]);
		}
		cout << endl;
	}


//	system("pause");
	return 0;
}
/*
5 ATATGGATGGTGTTTGGCTCTG TCTCCGGTTGATT ATATCTTGCGCTCTTGATTCGCATATTCT GCGTTTCGTTGCAA TTAACGCACAACCTAGACTT

*/
char mypair(char x)
{
	if (x == 'A')
		return 'T';
	else if (x == 'T')
		return 'A';
	else if (x == 'C')
		return 'G';
	else
		return 'C';
}