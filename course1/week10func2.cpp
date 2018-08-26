#include <iostream>
#include <cstring>
using namespace std;

inline char mytolower(char c)
{
	if (c >= 'A' && c <= 'Z')//是大写字母，执行转换。
		c += 'a' - 'A';//转成大写。
	return c;
}
int main()
{
	char a[80], b[80];
	cin.getline(a, 80);
	cin.getline(b, 80);
	int len1 = strlen(a), len2 = strlen(b);
	int len;
	if (len1 > len2)
		len = len1;
	else
		len = len2;
	char eq = '=';
	for (int i = 0; i < len; i++)
	{
		if (mytolower(a[i]) < mytolower(b[i]))
		{
			eq = '<';
			break;
		}
		else if ((mytolower(a[i]) > mytolower(b[i])))
		{
			eq = '>';
			break;
		}
	}
	cout << eq << endl;

//	system("pause");
	return 0;
}

