#include <iostream>
using namespace std;

/* ���̳С�
�������������������Ҫ��һ�������Ǽ̳С��̳���������������һ����������һ���࣬
��ʹ�ô�����ά��һ��Ӧ�ó����ø����ס�
Ҳ�ﵽ�����ô��빦�ܺ����ִ��ʱ���Ч����
������һ����ʱ������Ҫ���±�д�µ����ݳ�Ա�ͳ�Ա������ֻ��ָ���½�����̳���һ�����е���ĳ�Ա���ɡ�


һ������������Զ���࣬����ζ�ţ������ԴӶ������̳����ݺͺ�����
����һ�������࣬����ʹ��һ���������б���ָ�����ࡣ

class derived-class: access-specifier base-class
access-specifier = public��protected��private

class <��������>:<�̳з�ʽ1><������1>,<�̳з�ʽ2><������2>,��
{
<����������>
};

*/

class shape
{
public:
	//	shape(double len1, double len2)
	//	{
	//		length1 = len1;
	//		length2 = len2;
	//	}//���캯��

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
	//	�����shape���Ϲ��캯������������Թ���rectangle���Ϲ��캯�������ǲ��С�
	//	��������й��캯������������ô���壿����
	rectangle rect;
	rect.setshape(23.21254987, 34);
	cout << "rect.getArea(): " << rect.getArea() << endl;
	cout << "rect.getCost(rect.getArea()): " << rect.getCost(rect.getArea()) << endl;

}

/*
����	    public	 protected	 private
ͬһ����	yes	     yes	     yes
������	    yes	     yes	     no
�ⲿ����	yes	     no	         no

һ��������̳������еĻ��෽����������������⣺
- ����Ĺ��캯�������������Ϳ������캯����
- ����������������
- �������Ԫ������


*/


/* ����̬���麯�������麯����

*/




void func30()
{
	cout << "func30:" << endl;
}





