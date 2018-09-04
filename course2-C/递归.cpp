#include<iostream>
using namespace std;

void convert(int n)
{
	if (n / 2 != 0) { convert(n / 2); cout << (n % 2); }
	else cout << n;
}//如何把进制转换后的结果存储再数组里面？

void move(int n, char x, char y, char z)
{
	if (n == 1) cout << "move a plate from " << x << " to " << z << endl;
	else
	{
		move(n - 1, x, z, y);
		move(1, x, y, z);
		move(n - 1, y, x, z);
	}
}//汉诺塔

int fangpingguo(int m, int n)
{
	if (m <= 1 || n <= 0) return 1;
	if (m < n) return fangpingguo(m, m);
	else return fangpingguo(m, n - 1) + fangpingguo(m - 1, n);
}
//fangpingguo(100,100)=190569292, 运算量非常大，30min都没算出来。
//sum(xi,i,1,n)=m, xi>=0, xi is in Z.

double InversePoland()
{
	char s[10];
	cin >> s;
	switch (s[0])
	{
	case '+': return InversePoland() + InversePoland();
	case '-': return InversePoland() - InversePoland();
	case '*': return InversePoland() * InversePoland();
	case '/': return InversePoland() / InversePoland();
	default: return atof(s);
	}
}//怎么改成能直接输入一串字符的形式？
// * + 2 3 4

int main()
{
	move(4, 'A', 'B', 'C');

	cout << InversePoland();

	system("pause");
	return 0;
}

