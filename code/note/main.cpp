#include <iostream>
#include"myfunction.h"
using namespace std;

// 函数申明，函数的实际定义则可以在任何地方进行，目测即使在其它文件定义居然也行。。


// main() 是程序开始执行的地方
int main()
{

	char a[50];
	cout << a << endl;

	cout << "Hello World" << endl; // 输出 Hello World

	func27();

	system("pause");
	return 0;
}

