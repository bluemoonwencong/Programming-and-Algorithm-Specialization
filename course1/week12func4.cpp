#include<iostream>
using namespace std;

int main()
{
	int a, b;
	char op;
	cin >> a >> b >> op;
	switch (op)
	{
	case '+':
		cout << a + b << endl;
		break;
	case '-':
		cout << a - b << endl;
		break;
	case '*':
		cout << a * b << endl;
		break;
	case '/':
		if (b == 0) cout << "Divided by zero!" << endl;
		cout << a / b << endl;
		break;
	default:
		cout << "Invalid operator!" << endl;
	}

//	system("pause");
	return 0;
}

// 6 34.0 23.0 28.1 21.6 14.7 17.1 17.0 27.2 34.7 67.1 29.3 65.1

