// #include <iostream>
// using namespace std;

// class Base {
// public:
// 	int k;
// 	//Base(int n) :k(n) { }
// 	//这种写法真是又蠢又坏
// 	Base(int n) { k = n; }
// };
// class Big {
// public:
// 	int v;
// 	Base b;
	// 在此处补充你的代码
	Big(int n) :v(n), b(n) {}
/*
	Big(int n)
	{
		v = n;
		b.k = n;
	}
*/
	Big(Big &x) :v(x.v), b(x.b.k) {}

// };

// int main() {
// 	Big a1(5); Big a2 = a1;
// 	cout << a1.v << "," << a1.b.k << endl;
// 	cout << a2.v << "," << a2.b.k << endl;
	
// 	//system("pause");
// 	return 0;
// }

