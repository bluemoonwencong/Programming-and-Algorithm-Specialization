#include<iostream>
#include<cstring>
using namespace std;

int mystrlen(char x[]) {
	int i = 0;
	while (x[i] != '\0') i++;
	return i;
}

int main()
{
	char s[501] = { '\0' }, table[26] = { '\0' };
	int count[26];
	for (int i = 0; i < 26; i++) count[i] = 0;
	cin.getline(s, 500);
	cout << s << endl;
	for (int i = 0; i < mystrlen(s); i++)
		if (isalpha(s[i]))
		{
			bool have = false;
			int length = mystrlen(table);
			for (int j = 0; j < length; j++)
				if (tolower(s[i]) == table[j]) { count[j]++; have = true; }
			if (have == false) { table[length] = tolower(s[i]); count[length]++; }
		}

	int i = 0;
	while (count[i] > 0)
	{
		cout << table[i] << ": " << count[i] << endl;
		i++;
	}//查看

	int flag = 0;
	for (int i = 0; i < 26; i++)
		if (count[i] == 0)
			flag = i;
	for (int i=0;i<flag;i++)
		for(int j=1;j<flag-i;j++)
			if ()

	system("pause");
	return 0;
}

// zab&dcAab&c9defgb
