#include<iostream>
#include<cstring>
using namespace std;

// io、struct
// easy

/*
C++ 的 I/O 发生在流中，流是字节序列。
如果字节流是从设备（如键盘、磁盘驱动器、网络连接等）流向内存，这叫做输入操作。
如果字节流是从内存流向设备（如显示屏、打印机、磁盘驱动器、网络连接等），这叫做输出操作。

<iostream>	该文件定义了 cin、cout、cerr 和 clog 对象，分别对应于标准输入流、标准输出流、非缓冲标准错误流和缓冲标准错误流。
<iomanip>	该文件通过所谓的参数化的流操纵器（比如 setw 和 setprecision），来声明对执行标准化 I/O 有用的服务。
<fstream>	该文件为用户控制的文件处理声明服务。我们将在文件和流的相关章节讨论它的细节。


标准输出流（cout）:
预定义的对象 cout 是 iostream 类的一个实例。cout 对象"连接"到标准输出设备，通常是显示屏。cout 是与流插入运算符 << 结合使用的.
C++ 编译器根据要输出变量的数据类型，选择合适的流插入运算符来显示值。
<< 运算符被重载来输出内置类型（整型、浮点型、double 型、字符串和指针）的数据项。
endl 用于在行末添加一个换行符。

标准输入流（cin）:
预定义的对象 cin 是 iostream 类的一个实例。cin 对象附属到标准输入设备，通常是键盘。cin 是与流提取运算符 >> 结合使用的.

标准错误流（cerr）:
预定义的对象 cerr 是 iostream 类的一个实例。cerr 对象附属到标准错误设备，通常也是显示屏，但是 cerr 对象是非缓冲的，且每个流插入到 cerr 都会立即输出。

标准日志流（clog）:
预定义的对象 clog 是 iostream 类的一个实例。clog 对象附属到标准错误设备，通常也是显示屏，但是 clog 对象是缓冲的。
这意味着每个流插入到 clog 都会先存储在缓冲在，直到缓冲填满或者缓冲区刷新时才会输出。


*/


void func24()
{
	char name[50];
	int age = 0;
	cout << "input your name and age:";
	cin >> name >> age;
	cout << "your name is:" << name << endl;
	cout << "your age is:" << age << endl;
	//C++ 编译器根据要输入值的数据类型，选择合适的流提取运算符来提取值，并把它存储在给定的变量中。
	//流提取运算符 >> 在一个语句中可以多次使用，如果要求输入多个数据，可以 cin >> name >> age，等同于 cin>>name; cin>>age;

	cerr << "error message!" << endl;
	clog << "error message!" << endl;

}

//通过这些小实例，我们无法区分 cout、cerr 和 clog 的差异，但在编写和执行大型程序时，它们之间的差异就变得非常明显。
//所以良好的编程实践告诉我们，使用 cerr 流来显示错误消息，而其他的日志消息则使用 clog 流来输出。


//结构是 C++ 中另一种用户自定义的可用的数据类型，它允许您存储不同类型的数据项。
struct Books
{
	char title[50];
	char author[50];
	int id;
};

void func25()
{
	cout << "func25:" << endl;
	Books book1;
	Books book2;

	strcpy_s(book1.title, "c++");
	//book1.author = "jjbsdcad";
	//不能直接修改，太奇怪了。
	strcpy_s(book1.author, "jjbsdcad");
	book1.id = 12345;
	cout << book1.title << "\t";
	cout << book1.author << "\t";
	cout << book1.id << endl;

	strcpy_s(book2.title, "deeplearning");
	strcpy_s(book2.author, "bluove");
	book2.id = 123457;
	cout << book2.title << "\t";
	cout << book2.author << "\t";
	cout << book2.id << endl;


	//指向结构的指针
	//使用指向该结构的指针访问结构的成员，用 -> 运算符
	struct Books *p1;
	p1 = &book1;
	cout << p1->title << "\t";
	cout << p1->author << "\t";
	cout << p1->id << endl;



}


