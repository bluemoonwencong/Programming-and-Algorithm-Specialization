#include<iostream>
#include<string>
#include <limits>
using namespace std;

/*
学习 C++ 的指针既简单又有趣。通过指针，可以简化一些 C++ 编程任务的执行，还有一些任务，如动态内存分配，没有指针是无法执行的。
所以，想要成为一名优秀的 C++ 程序员，学习指针是很有必要的。

每一个变量都有一个内存位置，每一个内存位置都定义了可使用连字号（&）运算符访问的地址，它表示了在内存中的一个地址。
*/

void func14()
{
	cout << "func14:" << endl;
	int a = 0x4513AFUL;
	string b = "Hello World!";
	string c[10] = { "sc", "sfds", "afewfa" };
	cout << a << endl;
	cout << b << endl;
	cout << c[0] << endl;
	cout << c[1] << endl;
	cout << c[2] << endl;
	cout << c[3] << endl;
	cout << c[4] << endl;
	cout << c[9] << endl;

	cout << "a adress: " << &a << endl;
	cout << "b adress: " << &b << endl;
	cout << "c adress: " << &c << endl;
	cout << "c[0] adress: " << &c[0] << endl;
	cout << "c[1] adress: " << &c[1] << endl;
	cout << "c[2] adress: " << &c[2] << endl;
	cout << "c[100] adress: " << &c[100] << endl;
	//但是在用cout<<c[10]的时候会运行出错。

	short int d[5] = { 23,32,14,56,55 };
	cout << "d adress: " << &d << endl;
	cout << "d[0] adress: " << &d[0] << endl;
	cout << "d[1] adress: " << &d[1] << endl;
	cout << "d[2] adress: " << &d[2] << endl;
	cout << "d[3] adress: " << &d[3] << endl;
	cout << "d[4] adress: " << &d[4] << endl;
	cout << "d[8] adress: " << &d[8] << endl;
	cout << "bool: \t\t" << "所占字节数：" << sizeof(bool) << endl;
	cout << "bool max:" << (numeric_limits<bool>::max)() << "         ";
	cout << "bool min:" << (numeric_limits<bool>::min)() << endl;
	cout << "short: \t\t" << "所占字节数：" << sizeof(short) << endl;
	cout << "short max:" << (numeric_limits<short>::max)() << "         ";
	cout << "short min:" << (numeric_limits<short>::min)() << endl;
	cout << "short int: \t" << "所占字节数：" << sizeof(short int) << endl;
	cout << "short int max:" << (numeric_limits<short int>::max)() << "         ";
	cout << "short int min:" << (numeric_limits<short int>::min)() << endl;

}
/*
整数常量可以是十进制、八进制或十六进制的常量。前缀指定基数：0x 或 0X 表示十六进制，0 表示八进制，不带前缀则默认表示十进制。
整数常量也可以带一个后缀，后缀是 U 和 L 的组合，U 表示无符号整数（unsigned），L 表示长整数（long）。后缀可以是大写，也可以是小写，U 和 L 的顺序任意。
*/


/*
指针是一个变量，其值为另一个变量的地址，即，内存位置的直接地址。就像其他变量或常量一样，您必须在使用指针存储其他变量地址之前，对其进行声明。
type *var-name;
type 是指针的基类型，它必须是一个有效的 C++ 数据类型，var-name 是指针变量的名称。
int    *ip;    // 一个整型的指针
double *dp;    // 一个 double 型的指针
float  *fp;    // 一个浮点型的指针
char   *ch;    // 一个字符型的指针
所有指针的值的实际数据类型，不管是整型、浮点型、字符型，还是其他的数据类型，都是一样的，都是一个代表内存地址的长的十六进制数。
不同数据类型的指针之间唯一的不同是，指针所指向的变量或常量的数据类型不同。

使用指针时会频繁进行以下几个操作：
定义一个指针变量、把变量地址赋值给指针、访问指针变量中可用地址的值。


*/

void func15()
{
	cout << "func15:" << endl;
	int a = 23;
	int *ip;
	ip = &a;
	cout << &a << endl;
	cout << ip << endl;
	cout << *&a << endl;
	cout << *ip << endl;

}

// 在 C++ 中，有很多指针相关的概念，这些概念都很简单，但是都很重要。

// 1.NULL, 指针自加，大小比较。
void func16()
{
	cout << "func16:" << endl;
	cout << "NULL: " << NULL << endl;
	//NULL 的定义就是：define NULL 0


	int e[5] = { 23,2,1,45,2 };
	int *ip;
	ip = e;
	//把数组指针赋予ip的方式有点特别，但 ip=&e 会报错，除非用 ip=&e[0]。
	cout << '\n' << endl;
	cout << e << endl;
	cout << &e[0] << endl;
	cout << ip << endl;
	//cout << (ip++) << endl;
	//ip++会使ip的值加1，但是不会返回加1之后的值，所有这条的输出和 cout<<ip<<endl 一样。

	cout << "\nip++:" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << "i: " << i << "\t";
		cout << ip << "\t";
		cout << *ip << endl;
		ip++;
	};

	ip = &e[4];
	cout << "\nip--:" << endl;
	for (int i = 4; i >= 0; i--)
	{
		cout << "i: " << i << "\t";
		cout << ip << "\t";
		cout << *ip << endl;
		ip--;
	}

	ip = e;
	cout << "\n指针的比较：" << endl;
	while (ip <= &e[10])
	{
		cout << ip << "\t";
		cout << *ip << endl;
		ip++;
	}

	ip = e;
	cout << "\nadress + -" << endl;
	cout << "ip adress: " << ip << "\t";
	cout << "ip content: " << *ip << endl;
	cout << "ip+2 adress: " << ip + 2 << "\t";
	cout << "ip+2 content: " << *(ip + 2) << endl;

	cout << "(e+3) adress: " << e + 3 << "\t";
	cout << "(e+3) content: " << *(e + 3) << "\t";
	*(e + 3) = 555;
	cout << "*(e + 3) = 555, then, (e+3) content is: " << *(e + 3) << endl;

	cout << "int: \t\t" << "所占字节数：" << sizeof(int) << "\t";
	cout << "int max:" << (numeric_limits<int>::max)() << "\t";
	cout << "int min:" << (numeric_limits<int>::min)() << endl;


}


// 2.指针和数组是密切相关的。事实上，指针和数组在很多情况下是可以互换的。
void func17()
{
	cout << "func17:" << endl;
	short a[3] = { 23,44,60 };
	short *ip;
	ip = a;

	for (int i = 0; i < 3; i++)
	{
		cout << ip << "\t";
		cout << *ip << endl;
		ip++;
	};
	for (int i = 0; i < 3; i++)
	{
		cout << a << "\t";
		cout << *a << endl;
		//a++;
		//然而，指针和数组并不是完全互换的。
		//把指针运算符 * 应用到 var 上是完全可以的，但修改 var 的值是非法的。
		//这是因为 var 是一个指向数组开头的常量，不能作为左值。
	};
}

/* 3.指向指针的指针是一种多级间接寻址的形式，或者说是一个指针链。一个指向指针的指针变量必须如下声明:
type **var;

*/
void func18()
{
	cout << "func18:" << endl;
	short a;
	short *p;
	short **pp;
	a = 1024;
	p = &a;
	pp = &p;

	cout << "p adress: " << p << "\t";
	cout << "p content: " << *p << endl;
	cout << "pp adress: " << pp << "\t";
	cout << "pp content: " << *pp << "\t";
	cout << "pp content content: " << **pp << endl;

}


// 4.把指针传递给函数。
#include<ctime>

void getSecond(unsigned long *par);
void func19()
{
	cout << "func19:" << endl;

	unsigned long sec = 512;
	cout << "sec adress: " << &sec << endl;
	cout << "sec content: " << sec << endl;
	getSecond(&sec);
	cout << "sec adress: " << &sec << endl;
	cout << "sec content: " << sec << endl;

}
void getSecond(unsigned long *par)
{
	cout << "time(NULL): " << time(NULL) << endl;

	*par = time(NULL);
	//par是传递进来的指针，把这个指针对应的内容改成 time(NULL)

}



// 函數能接受指针作为参数的函数，也能接受数组作为参数
double avg1(long int *array, int size);
double avg2(long int *array, int size);
void func20()
{
	cout << "func20:" << endl;
	long int myarr[5] = { 23,1,2,0,5 };
	cout << "avg1: " << avg1(myarr, 5) << endl;
	cout << "avg2: " << avg2(myarr, 5) << endl;

}

double avg1(long int *par, int size)
{
	int sum = 0;
	double avg = 0;
	for (int i = 0; i < size; i++)
	{
		sum += par[i];
	};
	avg = (double)sum / size;
	return avg;
};
double avg2(long int *par, int size)
{
	int sum = 0;
	double avg = 0;
	for (int i = 0; i < size; i++)
	{
		sum += *(par + i);
	};
	avg = (double)sum / size;



	int *p = &sum;
	cout << "p adress: " << p << "\t";
	cout << "p content: " << *p << endl;
	cout << "(p+0) adress: " << (p + 0) << "\t";
	cout << "*(p+0) : " << *(p + 0) << "\t";
	cout << "p[0] : " << p[0] << endl;
	cout << "(p+2) adress: " << (p + 2) << "\t";
	cout << "*(p+2) : " << *(p + 2) << "\t";
	cout << "p[2] : " << p[2] << endl;
	//这就解释了在函数 avg1 中传入的明明是一个指针（虽然它指向数组），却可以直接把指针当数组用，的原因。
	//因为，原来指针本来就可以用[]，是的，除了 +, -, ++, --, <, >, == 和 &, * 以外，指针还可以用[]操纵，p[3] 等同于 *(p+3)。

	return avg;
};


/* 5.从函数返回指针
为了做到这点，必须声明一个返回指针的函数，如下所示：
int *myfunc()
{
pass;
};

另外，C++ 不支持在函数外返回局部变量的地址，除非定义局部变量为 static 变量。
关于 static 类，
http://www.runoob.com/cplusplus/cpp-static-members.html
http://www.runoob.com/cplusplus/cpp-storage-classes.html

*/

int *getRandom1();
int *getRandom2(int);
void func21()
{
	cout << "func21:" << endl;

	int *p;
	p = getRandom1();

	for (int i = 0; i < 15; i++)
	{
		cout << "p[" << i << "] adress: " << (p + i) << "\t";
		cout << "content: " << p[i] << endl;
	};
	cout << "sizeof pointer p: " << sizeof(p) << endl;
	//对啊，指针的 sizeof 是什么呢？
	//是该指针所存储的字节数，在本计算机，一个指针占用4字节内存空间，4*8=32，难道我的笔记本是32位的？？？
	//
	//资料：
	//编译器给指针分配的空间大小是和CPU的寻址长度相关的，比如32位的CPU，它的寻址长度为32位，那么这个空间也就占四个字节。
	//其实不管你定义什么样的指针类型，这个空间只是用来存地址，只占四个字节，而真正该空间所存的地址是哪一段内存的首地址才和所定义的指针类型相关。
	//
	//指针所占用的空间与指针指向的内容和内容的大小无关。
	//在不同的操作系统及编译环境下，指针类型所占用的字节数是不同的。
	//编译生成16位的代码时，指针占2个字节
	//编译生成32位的代码时，指针占4个字节
	//编译生成64位的代码时，指针占8个字节

	p = getRandom2(23);
	for (int i = 0; i < 23; i++)
	{
		cout << "p[" << i << "] adress: " << (p + i) << "\t";
		cout << "content: " << p[i] << endl;
	};

}

int *getRandom1()
{
	// static int arr[n];
	// 这里不能直接把n赋值给数组定义，想必是因为编译器要立刻知道所定义的数组的长度来规划内存使用。
	static int arr[12] = { 23,22 };

	//arr[15] = 555;
	// !!!极端危险
	//本来只是想解决怎样写出一个定义任意长度的数组的函数，中途想弄明白数组长度会不会在人为影响下变化，比如数组是不是在末尾有社么标记，那我就改变标记。
	//但是，但是数组后面的东西就是空指针啊，碰不得！
	//刚才没出事我觉得是 static 救了我一命，说也奇怪，用static之后，数组之后得所有地址都默认为0吗？
	//显然不可能，但实际上就是这样的。

	for (int i = 0; i < 15; i++)
	{
		cout << "arr[" << i << "] adress: " << &arr[i] << "\t";
		cout << "content: " << arr[i] << endl;
	};

	cout << "sizeof arr: " << sizeof(arr) / sizeof(arr[0]) << endl;
	//sizeof会返回字节数。

	srand(24);
	for (int i = 0; i < 12; i++)
	{
		//srand(24);
		arr[i] = rand();
	};

	return arr;

}

int *getRandom2(int n)
{
	static int arr[5] = { 1,2,3 };
	cout << "\ngetRandom2" << endl;
	cout << "sizeof arr: " << sizeof(arr) / sizeof(arr[0]) << endl;

	return arr;
}



