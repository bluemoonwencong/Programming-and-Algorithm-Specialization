// #include <iostream>
// using namespace std;
// class Sample {
// public:
// 	int v;
// 	Sample(int n) :v(n) { }//表示带有参数的构造函数v(n)，相当于v=n。也就是把n的值传给v。
	Sample(Sample &x) { v = 5 + x.v; }//也是构造函数
// };
// int main() {
// 	Sample a(5);
// 	Sample b = a;
// 	cout << b.v;
	
// //	system("pause");
// 	return 0;
// }
