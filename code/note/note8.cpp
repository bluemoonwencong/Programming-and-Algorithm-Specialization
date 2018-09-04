#include<iostream>
using namespace std;
#include<assert.h>

// 类，成员

/* 【1】
C++ 支持面向对象程序设计，类是 C++ 的核心特性，通常被称为用户定义的类型。
定义一个类，本质上是定义一个数据类型的蓝图。这实际上并没有定义任何数据，但它定义了类的名称意味着什么，也就是说，
它定义了类的对象包括了什么，以及可以在这个对象上执行哪些操作。


".": 成员访问运算符
"::": 范围解析运算符
public、private、protected 称为访问修饰符。
// 默认情况下，类的所有成员都是私有的。
// 一般会在私有区域定义数据，在公有区域定义相关的函数，以便在类的外部也可以调用这些函数

*/


class Box
{
	// 关键字 public、private、protected 称为访问修饰符。
public:
	double length;
	double width;
	double hight;
	//在类定义中定义的成员函数把函数声明为内联的，即便没有使用 inline 标识符。
	double getVolume(void)
	{
		cout << "成员函数访问 private1, protected2 :" << private1 << ", " << protected2 << endl;
		return length * width * hight;
	}
	double getSurface(void);
	Box()
	{
		a1 = 1;
	};//搞不懂为什么要这样。（原来是构造函数啊）
public:
	int a1;//可以再开一个 public, 可以之后定义。

		   // 如果沒有关键字，就默认是 private 。
		   // 私有成员变量或函数在类的外部是不可访问的，甚至是不可查看的。只有类和友元函数可以访问私有成员。
private:
	double private1 = 3;


	// 保护成员变量或函数与私有成员十分相似，但有一点不同，保护成员在派生类（即子类）中是可访问的。
protected:
	double protected2 = 7;

};
//成员函数可以定义在类定义内部，或者单独使用范围解析运算符::来定义。
double Box::getSurface(void)
{
	cout << "成员函数访问 private1, protected2 :" << private1 << ", " << protected2 << endl;
	return 2 * (length * width + width * hight + hight * length);
};



//派生类，三种继承方式，访问属性。
class SmallBox1 : public Box
{
public:
	void myprint()
	{
		cout << "public派生类SmallBox1访问 private1, protected2 :" << 404 << ", " << protected2 << endl;
		cout << "public派生类SmallBox1访问 public 变量 length, a1 :" << length << ", " << a1 << endl;
	}
	//public派生类不能访问父类中的private成员。（废话）
};


class SmallBox2 : protected Box
{
public:
	void myprint()
	{
		cout << "protected派生类SmallBox1访问 private1, protected2 :" << 404 << ", " << protected2 << endl;
		cout << "protected派生类SmallBox1访问 public 变量 length, a1 :" << length << ", " << a1 << endl;
	}
	//protected派生类不能访问父类的private成员。（废话）
};
class SmallSmallBox2 : SmallBox2
{
	void myprint()
	{
		cout << "" << endl;
		cout << "smallsmallbox2,派生自smallbox2(以protected派生自Box):" << endl;
		cout << "访问box的public成员 length, a1:  " << length << a1 << endl;
		cout << "访问box的 private1, protected2:  " << 404 << protected2 << endl;

	}
};
//SmallBox2是以protected方式派生自Box，所以SmallBox2中的成员，的成员访问属性，要改变。

class SmallBox3 : private Box
{
public:
	void myprint()
	{
		cout << "private派生类SmallBox1访问 private1, protected2 :" << 404 << ", " << protected2 << endl;
		cout << "private派生类SmallBox1访问 public 变量 length, a1 :" << length << ", " << a1 << endl;
	}
	//private派生类不能访问父类的private成员。（废话）
};
class SmallSmallBox3 : SmallBox3
{
	void myprint()
	{
		cout << "" << endl;
		cout << "smallsmallbox3,派生自smallbox3(以private派生自Box):" << endl;
		cout << "访问box的public成员 length, a1:  " << 404 << 404 << endl;
		cout << "访问box的 private1, protected2:  " << 404 << 404 << endl;

	}
};
//SmallBox3是以private方式派生自Box，所以SmallBox3中的成员，的成员访问属性，要改变，全部变成private。所以smallsmallbox3不能访问任何东西。


/*
论开放程度， public > protected > private
a.public 继承：基类 public 成员，protected 成员，private 成员的访问属性在派生类中分别变成：public, protected, private
b.protected 继承：基类 public 成员，protected 成员，private 成员的访问属性在派生类中分别变成：protected, protected, private
c.private 继承：基类 public 成员，protected 成员，private 成员的访问属性在派生类中分别变成：private, private, private

但无论哪种继承方式，下面两点都没有改变：
a.private 成员只能被本类成员（类内）和友元访问，不能被派生类访问；
b.protected 成员可以被派生类访问。

*/




void func26()
{
	cout << "func26:" << endl;
	Box box1;
	Box box2;
	double volume;
	box1.length = 2.3;
	//“.”表示成员访问运算符
	box1.width = 5.3;
	box1.hight = 5.2;
	volume = box1.length*box1.width*box1.hight;
	cout << "box1 volume: " << volume << endl;
	box2.length = 12.3;
	box2.width = 15.3;
	box2.hight = 15.2;
	volume = box2.length*box2.width*box2.hight;
	cout << "box2 volume: " << volume << endl;

	cout << "box1 getVolume: " << box1.getVolume() << "\t";
	cout << "box1 getSurface: " << box1.getSurface() << endl;
	cout << "box2 getVolume: " << box2.getVolume() << "\t";
	cout << "box2 getSurface: " << box2.getSurface() << endl;

	SmallBox1 smallbox1;
	smallbox1.myprint();
	SmallBox2 smallbox2;
	smallbox2.myprint();

}


/* 【构造函数、析构函数】constructor, destructor
类的构造函数是一种特殊的函数，在创建一个新的对象时调用。类的析构函数也是一种特殊的函数，在删除所创建的对象时调用。
构造函数的名称与类的名称是完全相同的，并且不会返回任何类型，也不会返回 void。构造函数可用于为某些成员变量设置初始值。

*/


class Line
{
public:
	void setLength(double);
	double getLength(void);
	Line(double, double, double);
	//	Line();
private:
	double length1, length2, length3;
};

Line::Line(double len1, double len2, double len3) : length1(len1), length2(len2), length3(len3)
{
	//使用初始化列表来初始化字段,等同与下面三句
	//length1 = len1;
	//length2 = len2;
	//length3 = len3;
	cout << "Object is being created" << endl;
}//还会有一个默认的拷贝构造函数

void Line::setLength(double len) { length1 = len; }
double Line::getLength() { return length1; }



/* 【拷贝构造函数】copy constructor
拷贝构造函数, 使用同一类中之前创建的对象来初始化新创建的对象。
如果在类中没有定义拷贝构造函数，编译器会自行定义一个。
如果类带有指针变量，并有动态内存分配，则它必须有一个拷贝构造函数。
classname (const classname &obj)
{
//构造函数的主体
}
必须定义拷贝构造函数的情况：
（1）只包含类类型成员或内置类型（但不是指针类型）成员的类，无须显式地定义拷贝构造函数也可以拷贝；
（2）有的类有一个数据成员是指针，或者是有成员表示在构造函数中分配的其他资源，这两种情况下都必须定义拷贝构造函数。

以下情况都会调用拷贝构造函数：
（1）一个对象以值传递的方式 传入函数体，该函数被调用的时候该对象所属的类的拷贝构造函数被使用
void func(myLine line)//这是形参
{ }
void main() {
myLine line1;
func(line1);//这是实参。
//一般来说，编译器会自动定义拷贝构造函数，然后形参 line 会等于 line1 ，然后继续运行函数 func 。
//除非手动更改拷贝构造函数，故意使得line1不赋给line。
}

（2）一个对象以值传递的方式 从函数返回时候，该对象所属的类的拷贝构造函数会被调用


（3）一个对象需要通过另外一个对象进行初始化
myLine line1;
myLine line2 = line1;
*/

class myLine
{
public:
	myLine();
	myLine(double);
	myLine(const myLine &obj);
	//可以有多个构造函数，是重载关系
	~myLine();
	void setLength(double);
	double getLength(void);
private:
	double *p;
};

void myLine::setLength(double len) { *p = len; }
double myLine::getLength() { return *p; }

myLine::myLine() {
	cout << "调用构造函数1" << endl;
	p = new double;
	*p = 3.14;
}

myLine::myLine(double len) {
	cout << "调用构造函数2" << endl;
	//	double a; p = &a;
	//	如果只是给指针分配空间，为什么用这两句替换也会报错？？？

	p = new double;
	*p = len;
}// 也可以看作类型转换构造函数，类型转换构造函数只有一个参数
myLine::myLine(const myLine &obj) {
	cout << "调用拷贝构造函数" << endl;
	p = new double;
	*p = *obj.p;
}//数据成员是指针，必须制定拷贝构造函数 !!!但是我把这定义删除，也能正常运行啊？
myLine::~myLine() {
	delete p;
	cout << "释放内存" << endl;
}//一个类最多只能有一个析构函数




void inlinefunc1(myLine line) { cout << line.getLength() << endl; };
// 传进去的不一定是 line4 哦，如果故意破坏拷贝构造函数
myLine inlinefunc2() { myLine cache(5); return cache; };
// 同理，返回的不一定是 cache 哦，取决于构造函数怎么写




void func27()
{
	cout << "func27:" << endl;
	Line line1(2, 3, 4);
	cout << "getLength: " << line1.getLength() << endl;
	line1.setLength(5.12);
	cout << "getLength: " << line1.getLength() << endl;
	Line line2 = line1;
	cout << "getLength: " << line2.getLength() << endl;
	Line line3(line1);
	cout << "getLength: " << line3.getLength() << endl;
	cout << endl;


	cout << "\n语法测试" << endl;
	int *test1 = NULL;
	cout << test1 << endl;
	test1 = new int;
	cout << test1 << endl;
	int test2(55);//直接初始化，调用构造函数
	cout << test2 << endl;
	int test3 = 66;//拷贝初始化，调用拷贝构造函数
	cout << test3 << endl;


	cout << "\n拷贝构造函数:" << endl;
	myLine line4;//构造函数1
	cout << "line4.getLength: " << line4.getLength() << endl;
	line4.setLength(43.21);
	cout << "line4.getLength: " << line4.getLength() << endl;
	myLine line5(56.78);//构造函数2
	cout << "line5.getLength: " << line5.getLength() << endl;
	myLine line6(line5);//拷贝构造函数
	cout << "line6.getLength: " << line6.getLength() << endl;
	myLine line7 = line5;//拷贝构造函数
	cout << "line7.getLength: " << line7.getLength() << endl;
	inlinefunc1(line4);
	myLine line8 = 8.0;//这不是赋值，是初始化。
	cout << "line8.getLength: " << line8.getLength() << endl;
	line8 = 12.34;//这是赋值，虽然两边明明不是同一类型，12.34被类型转换构造函数转化为一个临时对象，然后赋值给 line8 
	cout << "line8.getLength: " << line8.getLength() << endl;

	cout << "析构函数：" << endl;
	myLine *p;
	p = new myLine;//调用拷贝构造函数一次
	cout << (*p).getLength() << endl;
	(*p).setLength(5);
	cout << (*p).getLength() << endl;
	delete p;//调用析构构造函数一次

	p = new myLine[5];//调用拷贝构造函数五次
	cout << (*p).getLength() << endl;
	cout << (*(p + 1)).getLength() << endl;
	cout << p[1].getLength() << endl;

	delete[] p;//调用析构构造函数五次

}


/* 【友元】
类的友元函数是定义在类外部，但有权访问类的所有私有（private）成员和保护（protected）成员。
尽管友元函数的原型有在类的定义中出现过，但是友元函数并不是成员函数。
友元可以是一个函数，该函数被称为友元函数；友元也可以是一个类，该类被称为友元类，在这种情况下，整个类及其所有成员都是友元。
定义有元函数和有元类 :
friend void printLength(Line line1);
friend class myLine;
*/

//	cout<< "\n有元:" <<endl;
class myLine3
{
public:
	void setLength(double);
	friend void printLength(myLine3 myline3);
private:
	double length;
};

void myLine3::setLength(double len)
{
	length = len;
}

void printLength(myLine3 myline3)
{
	//函数printLength是myLine3类的有元，可以访问任何成员。
	//注意：有元不是成员，不能用成员访问运算符"."来打开。
	cout << myline3.length << endl;
}

/*
cout<< "\n有元:" <<endl;
myLine3 myline3;
myline3.setLength(15.12);
printLength(myline3);

*/



/* 【inline】
内联函数是通常与类一起使用。如果一个函数是内联的，那么在编译时，编译器会把该函数的代码副本放置在每个调用该函数的地方。
对内联函数进行任何修改，都需要重新编译函数的所有客户端，因为编译器需要重新更换一次所有的代码，否则将会继续使用旧的函数。

关键字 inline
在类定义中的定义的函数都是内联函数，即使没有使用 inline 说明符。

*/

class neilian
{
public:
	void print();
};
void neilian::print()
{
	cout << "在类中定义的函数，即使没用inline关键字，也都是内联函数。" << endl;
}

inline double mymax(double x, double y)
{
	if (x > y)
	{
		return x;
	}
	else if (x<y)
	{
		return y;
	}
	else
	{
		cout << "x==y" << endl;
		return x;
	}
}

/* 【this】
C++ 中，每一个对象都能通过 this 指针来访问自己的地址。
this 指针是所有成员函数的隐含参数, 因此在成员函数内部，它可以用来指向调用对象。

友元函数没有 this 指针，因为友元不是类的成员。只有成员函数才有 this 指针。 // 难道有元函数不是对象？

*/
class myBox
{
	double length, width, high;
public:
	static int number;
	//构造函数定义
	myBox(double len1, double len2, double len3)
	{
		length = len1;
		width = len2;
		high = len3;
		number++;
	}
	double v(void)
	{
		return length * width * high;
	}
	int compare(myBox bb)
	{
		cout << "\ncompare内部输出:" << endl;
		//
		cout << "this->v():" << this->v() << endl;
		cout << "(*this).v():" << (*this).v() << endl;
		cout << "bb->v():" << bb.v() << endl;
		cout << "(&bb)->v():" << (&bb)->v() << endl;
		//那么this就是指向类的指针。在func28里有验证。
		cout << "return:" << (this->v() > bb.v()) << endl;
		cout << endl;

		return this->v()  >  bb.v();
	}
	void printpoint()
	{
		cout << this << endl;
	}
};

/* 【指向类的指针】
指向类的指针方式如同指向结构的指针。实际上，类可以看成是一个带有函数的结构。
访问指向类的指针的成员，需要使用成员访问运算符 ->，就像访问指向结构的指针一样。
与所有的指针一样，您必须在使用指针之前，对指针进行初始化。

*/


/*
myBox::number = 0;

cout << "number: " << myBox::number << endl;

int a;
a = 3;

这几句都提示“此申明没有储存类或类型说明符”。
*/


//double myBox::number = 0;单独这一句会报错。
int myBox::number = 0;
void func28()
{
	cout << "func28" << endl;

	neilian test;
	test.print();

	cout << mymax(1.2, 3.4) << endl;
	cout << mymax(1.1, 0.4) << endl;
	cout << mymax(0.1125, 0.1125) << endl;


	cout << "\nthis指针:" << endl;
	myBox box1(1.2, 2.3, 3.4);
	cout << "number: " << myBox::number << endl;
	myBox box2(2.1, 3.2, 4.3);
	cout << "number: " << myBox::number << endl;

	cout << "box1.v():" << box1.v() << endl;
	cout << "box2.v():" << box2.v() << endl;
	if (box1.compare(box2))
	{
		cout << "box1 > box2" << endl;
	}
	else
	{
		cout << "box1 < box2" << endl;
	}

	cout << "\n指向类的指针:" << endl;
	myBox *p1, *p2;
	p1 = &box1;
	p2 = &box2;

	box1.printpoint();
	cout << p1 << endl;
	box2.printpoint();
	cout << p2 << endl;
	//果然，类内部的this指针就是指向这个类。

	cout << "p1->v(): " << p1->v() << endl;
	cout << "p2->v(): " << p2->v() << endl;
	p1->compare(*p2);

	cout << "\n静态类成员:" << endl;


}



/* 【C++类的静态成员】
用 static 关键字来把类成员定义为静态。当我们声明类的成员为静态时，这意味着无论创建多少个类的对象，静态成员都只有一个副本。
静态成员在类的所有对象中是共享的。如果不存在其他的初始化语句，在创建第一个对象时，所有的静态数据都会被初始化为零。
我们不能把静态成员的初始化放置在类的定义中，但是可以在类的外部通过使用范围解析运算符 :: 来重新声明静态变量从而对它进行初始化。

*/


