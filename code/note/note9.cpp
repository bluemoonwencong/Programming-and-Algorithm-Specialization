#include <iostream>
using namespace std;

/* 【继承】
面向对象程序设计中最重要的一个概念是继承。继承允许我们依据另一个类来定义一个类，
这使得创建和维护一个应用程序变得更容易。
也达到了重用代码功能和提高执行时间的效果。
当创建一个类时，不需要重新编写新的数据成员和成员函数，只需指定新建的类继承了一个已有的类的成员即可。


一个类可以派生自多个类，这意味着，它可以从多个基类继承数据和函数。
定义一个派生类，我们使用一个类派生列表来指定基类。

class derived-class: access-specifier base-class
access-specifier = public、protected、private

class <派生类名>:<继承方式1><基类名1>,<继承方式2><基类名2>,…
{
<派生类类体>
};

*/

class shape
{
public:
	//	shape(double len1, double len2)
	//	{
	//		length1 = len1;
	//		length2 = len2;
	//	}//构造函数

	void setshape(double len1, double len2)
	{
		length1 = len1;
		length2 = len2;
	}

protected:
	double length1, length2;
};

class paintCost
{
public:
	double getCost(double area)
	{
		return 70 * area;
	}
};

class rectangle : public shape, public paintCost
{
public:
	double getArea()
	{
		return length1 * length2;
	}
};



void func29()
{
	cout << "func29:" << endl;
	//	rectangle rect(23.2, 34);
	//	如果给shape加上构造函数，这句会出错。试过给rectangle加上构造函数，但是不行。
	//	如果基类有构造函数，派生类怎么定义？？？
	rectangle rect;
	rect.setshape(23.21254987, 34);
	cout << "rect.getArea(): " << rect.getArea() << endl;
	cout << "rect.getCost(rect.getArea()): " << rect.getCost(rect.getArea()) << endl;

}

/*
访问	    public	 protected	 private
同一个类	yes	     yes	     yes
派生类	    yes	     yes	     no
外部的类	yes	     no	         no

一个派生类继承了所有的基类方法，但下列情况除外：
- 基类的构造函数、析构函数和拷贝构造函数。
- 基类的重载运算符。
- 基类的友元函数。


*/


/* 【多态、虚函数、纯虚函数】

*/




void func30()
{
	cout << "func30:" << endl;
}





