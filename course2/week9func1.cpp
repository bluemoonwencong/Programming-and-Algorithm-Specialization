#include<iostream>
using namespace std;

int* shatter(int x)
{
	int *tmp = new int[7];
	for (int i = 0; i < 7; i++)
		tmp[i] = -1;
	int i = 0;
	while (x > 0)
	{
		tmp[i] = x % 10;
		x = x / 10;
		i++;
	}
	
	return tmp;
}
void printarray(int *p)
{
	for (int i = 0; i < 7; i++)
		cout << p[i] << endl;
}
int howmany3(int *p)
{
	int sum = 0;
	for (int i = 0; i < 20; i++)
		if (p[i] == 3)
			sum += 1;
	return sum;
}

int main()
{
	int m, k;
	cin >> m >> k;
	int *p = shatter(m);

//	printarray(p);
//	cout << endl;

	int k_number = howmany3(p);
//	cout << k_number << endl;
	if (m % 19 == 0 && k_number == k)
		cout << "YES";
	else
		cout << "NO";

//	system("pause");
	return 0;
}


/*
Q：返回数组？
A:拿到这个问题，像我这样初学者首先建立的思路是，你不是要我返回一个数组吗，我就返回一个数组的首地址给你啊，
然后你根据这个地址去寻址，不就可以了吗。一开始我也这么想，因为我在java里就是这么干，所以很自然就想到了，
然而是错的，而且是范了很傻的错误，因为c++里的指针可不是java里的引用，c++里也没有GC（Garbage Collection），
关于内存的事还得靠你自己，你自己。

错误原因：
函数体内部创建的变量都是局部变量，当函数运行结束的时候，都会抛弃，也就是说你只返回了一个temp指针，
这个指针确实是你想要的，这没有问题，但是它指向的内容在函数结束也就是return的那一刻之后就已经物是人非了。
所以你用这个这个指针去访问的内容也不是你想要的内容了。
解决方法：
动态内存分配，就是new和delete的配合使用。在函数里用new关键字创建一个数组，这样这块地址对应的内容就属于你管理了，
再也不会在函数结束的时候被回收了，你也就可以通过返回的指针来访问数组了，最后再delete一下。

千万不要返回一个局部变量的指针或引用，因为你返回也是没用的，得到的指针所指内容在函数结束后就已经变了。

*/




