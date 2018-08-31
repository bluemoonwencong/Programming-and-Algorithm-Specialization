#include<iostream>
using namespace std;

struct table
{
	char alpha = '\0';
	int n = 0;
};

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
	char s[501] = { '\0' };
	cin.getline(s, 500);
	cout << s << endl;
	table mytable[26];
	for (int i = 0; i < 26; i++) mytable[i].n = 0;


	int i = 0;
	while (mytable[i].n > 0)
	{
		cout << mytable[i].alpha << ': ' << mytable[i].n << endl;
		i++;
	}


//	system("pause");
	return 0;
}

// ab&dcAab&c9defgb
