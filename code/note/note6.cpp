#include<iostream>
#include<string>
#include <limits>
using namespace std;

// 引用、日期时间


/*
引用变量是一个别名，也就是说，它是某个已存在变量的另一个名字。
试想变量名称是变量附属在内存位置中的标签，可以把引用当成是变量附属在内存位置中的第二个标签。
因此，可以通过原始变量名称或引用来访问变量的内容。

引用通常用于函数参数列表和函数返回值。

引用很容易与指针混淆，它们之间有三个主要的不同：
a.不存在空引用。引用必须连接到一块合法的内存。
b.一旦引用被初始化为一个对象，就不能被指向到另一个对象。指针可以在任何时候指向到另一个对象。
c.引用必须在创建时被初始化。指针可以在任何时间被初始化。
d.没有引用的引用就等于引用，不像指针一样可以成链状。
*/



void func22()
{
	cout << "func22:" << endl;
	int i = 25;
	int& s = i;
	int& d = i;
	int& sd = s;
	//在这些声明中，& 读作引用。
	cout << s << endl;
	cout << d << endl;
	cout << sd << endl;


}


/*
C++ 标准库没有提供所谓的日期类型。C++ 继承了 C 语言用于日期和时间操作的结构和函数。
有四个与时间相关的类型：clock_t、time_t、size_t 和 tm。
类型 clock_t、size_t 和 time_t 能够把系统时间和日期表示为某种整数。

结构类型 tm 把日期和时间以 C 结构的形式保存:
struct tm {
int tm_sec;   // 秒，正常范围从 0 到 59，但允许至 61
int tm_min;   // 分，范围从 0 到 59
int tm_hour;  // 小时，范围从 0 到 23
int tm_mday;  // 一月中的第几天，范围从 1 到 31
int tm_mon;   // 月，范围从 0 到 11
int tm_year;  // 自 1900 年起的年数
int tm_wday;  // 一周中的第几天，范围从 0 到 6，从星期日算起
int tm_yday;  // 一年中的第几天，范围从 0 到 365，从 1 月 1 日算起
int tm_isdst; // 夏令时
}

C 库函数 time_t time(time_t *seconds) 返回自纪元 Epoch（1970-01-01 00:00:00 UTC）起经过的时间，以秒为单位。
如果 seconds 不为空，则返回值也存储在变量 seconds 中。

C 库函数 char *ctime(const time_t *timer) 返回一个表示当地时间的字符串，当地时间是基于参数 timer。返回的字符串格式如下：
Www Mmm dd hh:mm:ss yyyy 其中，Www 表示星期几，Mmm 是以字母表示的月份，dd 表示一月中的第几天，hh:mm:ss 表示时间，yyyy 表示年份。





*/
#include<ctime>

void func23()
{
	cout << "func23:" << endl;
	time_t sec1 = 0;
	time_t sec2 = 0;
	time_t *sec3;
	sec3 = &sec2;
	cout << time(NULL) << endl;
	cout << "sec1: " << sec1 << endl;
	cout << "sec2: " << sec2 << endl;
	cout << "sec3: " << sec3 << endl;
	sec1 = time(sec3);
	//sec3是指向sec2的指针，time函数会把输入指针指向的变量的内容更新，同时返回这个更新。
	//所以这一句的效果相当于 sec1=time(&sec2)
	//sec3始终是不变的。
	cout << "sec1: " << sec1 << endl;
	cout << "sec2: " << sec2 << endl;
	cout << "sec3: " << sec3 << endl;

	time_t curtime;
	time(&curtime);
	char str[50];
	cout << "curtime: " << curtime << endl;
	ctime_s(str, sizeof(str), &curtime);
	cout << "curtime: " << curtime << endl;
	cout << "str: " << str << endl;




}

/*
*/
