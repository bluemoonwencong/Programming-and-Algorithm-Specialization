#include<iostream>
using namespace std;

int main()
{
	int a, b, c;
	char eat;
	cin >> a >> eat >> b >> eat >> c;
	if (a + b == c)
		cout << '+';
	else if (a - b == c)
		cout << '-';
	else if (a * b == c)
		cout << '*';
	else if (a / b == c)
		cout << '/';
	else if (a % b == c)
		cout << '%';
	else
		cout << "error";

//	system("pause");
	return 0;
}

