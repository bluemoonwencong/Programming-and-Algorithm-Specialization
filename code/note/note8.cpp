#include<iostream>
using namespace std;
#include<assert.h>

// �࣬��Ա

/* ��1��
C++ ֧��������������ƣ����� C++ �ĺ������ԣ�ͨ������Ϊ�û���������͡�
����һ���࣬�������Ƕ���һ���������͵���ͼ����ʵ���ϲ�û�ж����κ����ݣ��������������������ζ��ʲô��Ҳ����˵��
����������Ķ��������ʲô���Լ����������������ִ����Щ������


".": ��Ա���������
"::": ��Χ���������
public��private��protected ��Ϊ�������η���
// Ĭ������£�������г�Ա����˽�еġ�
// һ�����˽�����������ݣ��ڹ�����������صĺ������Ա�������ⲿҲ���Ե�����Щ����

*/


class Box
{
	// �ؼ��� public��private��protected ��Ϊ�������η���
public:
	double length;
	double width;
	double hight;
	//���ඨ���ж���ĳ�Ա�����Ѻ�������Ϊ�����ģ�����û��ʹ�� inline ��ʶ����
	double getVolume(void)
	{
		cout << "��Ա�������� private1, protected2 :" << private1 << ", " << protected2 << endl;
		return length * width * hight;
	}
	double getSurface(void);
	Box()
	{
		a1 = 1;
	};//�㲻��ΪʲôҪ��������ԭ���ǹ��캯������
public:
	int a1;//�����ٿ�һ�� public, ����֮���塣

		   // ����]�йؼ��֣���Ĭ���� private ��
		   // ˽�г�Ա��������������ⲿ�ǲ��ɷ��ʵģ������ǲ��ɲ鿴�ġ�ֻ�������Ԫ�������Է���˽�г�Ա��
private:
	double private1 = 3;


	// ������Ա����������˽�г�Աʮ�����ƣ�����һ�㲻ͬ��������Ա�������ࣨ�����ࣩ���ǿɷ��ʵġ�
protected:
	double protected2 = 7;

};
//��Ա�������Զ������ඨ���ڲ������ߵ���ʹ�÷�Χ���������::�����塣
double Box::getSurface(void)
{
	cout << "��Ա�������� private1, protected2 :" << private1 << ", " << protected2 << endl;
	return 2 * (length * width + width * hight + hight * length);
};



//�����࣬���ּ̳з�ʽ���������ԡ�
class SmallBox1 : public Box
{
public:
	void myprint()
	{
		cout << "public������SmallBox1���� private1, protected2 :" << 404 << ", " << protected2 << endl;
		cout << "public������SmallBox1���� public ���� length, a1 :" << length << ", " << a1 << endl;
	}
	//public�����಻�ܷ��ʸ����е�private��Ա�����ϻ���
};


class SmallBox2 : protected Box
{
public:
	void myprint()
	{
		cout << "protected������SmallBox1���� private1, protected2 :" << 404 << ", " << protected2 << endl;
		cout << "protected������SmallBox1���� public ���� length, a1 :" << length << ", " << a1 << endl;
	}
	//protected�����಻�ܷ��ʸ����private��Ա�����ϻ���
};
class SmallSmallBox2 : SmallBox2
{
	void myprint()
	{
		cout << "" << endl;
		cout << "smallsmallbox2,������smallbox2(��protected������Box):" << endl;
		cout << "����box��public��Ա length, a1:  " << length << a1 << endl;
		cout << "����box�� private1, protected2:  " << 404 << protected2 << endl;

	}
};
//SmallBox2����protected��ʽ������Box������SmallBox2�еĳ�Ա���ĳ�Ա�������ԣ�Ҫ�ı䡣

class SmallBox3 : private Box
{
public:
	void myprint()
	{
		cout << "private������SmallBox1���� private1, protected2 :" << 404 << ", " << protected2 << endl;
		cout << "private������SmallBox1���� public ���� length, a1 :" << length << ", " << a1 << endl;
	}
	//private�����಻�ܷ��ʸ����private��Ա�����ϻ���
};
class SmallSmallBox3 : SmallBox3
{
	void myprint()
	{
		cout << "" << endl;
		cout << "smallsmallbox3,������smallbox3(��private������Box):" << endl;
		cout << "����box��public��Ա length, a1:  " << 404 << 404 << endl;
		cout << "����box�� private1, protected2:  " << 404 << 404 << endl;

	}
};
//SmallBox3����private��ʽ������Box������SmallBox3�еĳ�Ա���ĳ�Ա�������ԣ�Ҫ�ı䣬ȫ�����private������smallsmallbox3���ܷ����κζ�����


/*
�ۿ��ų̶ȣ� public > protected > private
a.public �̳У����� public ��Ա��protected ��Ա��private ��Ա�ķ����������������зֱ��ɣ�public, protected, private
b.protected �̳У����� public ��Ա��protected ��Ա��private ��Ա�ķ����������������зֱ��ɣ�protected, protected, private
c.private �̳У����� public ��Ա��protected ��Ա��private ��Ա�ķ����������������зֱ��ɣ�private, private, private

���������ּ̳з�ʽ���������㶼û�иı䣺
a.private ��Աֻ�ܱ������Ա�����ڣ�����Ԫ���ʣ����ܱ���������ʣ�
b.protected ��Ա���Ա���������ʡ�

*/




void func26()
{
	cout << "func26:" << endl;
	Box box1;
	Box box2;
	double volume;
	box1.length = 2.3;
	//��.����ʾ��Ա���������
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


/* �����캯��������������constructor, destructor
��Ĺ��캯����һ������ĺ������ڴ���һ���µĶ���ʱ���á������������Ҳ��һ������ĺ�������ɾ���������Ķ���ʱ���á�
���캯���������������������ȫ��ͬ�ģ����Ҳ��᷵���κ����ͣ�Ҳ���᷵�� void�����캯��������ΪĳЩ��Ա�������ó�ʼֵ��

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
	//ʹ�ó�ʼ���б�����ʼ���ֶ�,��ͬ����������
	//length1 = len1;
	//length2 = len2;
	//length3 = len3;
	cout << "Object is being created" << endl;
}//������һ��Ĭ�ϵĿ������캯��

void Line::setLength(double len) { length1 = len; }
double Line::getLength() { return length1; }



/* ���������캯����copy constructor
�������캯��, ʹ��ͬһ����֮ǰ�����Ķ�������ʼ���´����Ķ���
���������û�ж��忽�����캯���������������ж���һ����
��������ָ����������ж�̬�ڴ���䣬����������һ���������캯����
classname (const classname &obj)
{
//���캯��������
}
���붨�忽�����캯���������
��1��ֻ���������ͳ�Ա���������ͣ�������ָ�����ͣ���Ա���࣬������ʽ�ض��忽�����캯��Ҳ���Կ�����
��2���е�����һ�����ݳ�Ա��ָ�룬�������г�Ա��ʾ�ڹ��캯���з����������Դ������������¶����붨�忽�����캯����

�������������ÿ������캯����
��1��һ��������ֵ���ݵķ�ʽ ���뺯���壬�ú��������õ�ʱ��ö�����������Ŀ������캯����ʹ��
void func(myLine line)//�����β�
{ }
void main() {
myLine line1;
func(line1);//����ʵ�Ρ�
//һ����˵�����������Զ����忽�����캯����Ȼ���β� line ����� line1 ��Ȼ��������к��� func ��
//�����ֶ����Ŀ������캯��������ʹ��line1������line��
}

��2��һ��������ֵ���ݵķ�ʽ �Ӻ�������ʱ�򣬸ö�����������Ŀ������캯���ᱻ����


��3��һ��������Ҫͨ������һ��������г�ʼ��
myLine line1;
myLine line2 = line1;
*/

class myLine
{
public:
	myLine();
	myLine(double);
	myLine(const myLine &obj);
	//�����ж�����캯���������ع�ϵ
	~myLine();
	void setLength(double);
	double getLength(void);
private:
	double *p;
};

void myLine::setLength(double len) { *p = len; }
double myLine::getLength() { return *p; }

myLine::myLine() {
	cout << "���ù��캯��1" << endl;
	p = new double;
	*p = 3.14;
}

myLine::myLine(double len) {
	cout << "���ù��캯��2" << endl;
	//	double a; p = &a;
	//	���ֻ�Ǹ�ָ�����ռ䣬Ϊʲô���������滻Ҳ�ᱨ������

	p = new double;
	*p = len;
}// Ҳ���Կ�������ת�����캯��������ת�����캯��ֻ��һ������
myLine::myLine(const myLine &obj) {
	cout << "���ÿ������캯��" << endl;
	p = new double;
	*p = *obj.p;
}//���ݳ�Ա��ָ�룬�����ƶ��������캯�� !!!�����Ұ��ⶨ��ɾ����Ҳ���������а���
myLine::~myLine() {
	delete p;
	cout << "�ͷ��ڴ�" << endl;
}//һ�������ֻ����һ����������




void inlinefunc1(myLine line) { cout << line.getLength() << endl; };
// ����ȥ�Ĳ�һ���� line4 Ŷ����������ƻ��������캯��
myLine inlinefunc2() { myLine cache(5); return cache; };
// ͬ�����صĲ�һ���� cache Ŷ��ȡ���ڹ��캯����ôд




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


	cout << "\n�﷨����" << endl;
	int *test1 = NULL;
	cout << test1 << endl;
	test1 = new int;
	cout << test1 << endl;
	int test2(55);//ֱ�ӳ�ʼ�������ù��캯��
	cout << test2 << endl;
	int test3 = 66;//������ʼ�������ÿ������캯��
	cout << test3 << endl;


	cout << "\n�������캯��:" << endl;
	myLine line4;//���캯��1
	cout << "line4.getLength: " << line4.getLength() << endl;
	line4.setLength(43.21);
	cout << "line4.getLength: " << line4.getLength() << endl;
	myLine line5(56.78);//���캯��2
	cout << "line5.getLength: " << line5.getLength() << endl;
	myLine line6(line5);//�������캯��
	cout << "line6.getLength: " << line6.getLength() << endl;
	myLine line7 = line5;//�������캯��
	cout << "line7.getLength: " << line7.getLength() << endl;
	inlinefunc1(line4);
	myLine line8 = 8.0;//�ⲻ�Ǹ�ֵ���ǳ�ʼ����
	cout << "line8.getLength: " << line8.getLength() << endl;
	line8 = 12.34;//���Ǹ�ֵ����Ȼ������������ͬһ���ͣ�12.34������ת�����캯��ת��Ϊһ����ʱ����Ȼ��ֵ�� line8 
	cout << "line8.getLength: " << line8.getLength() << endl;

	cout << "����������" << endl;
	myLine *p;
	p = new myLine;//���ÿ������캯��һ��
	cout << (*p).getLength() << endl;
	(*p).setLength(5);
	cout << (*p).getLength() << endl;
	delete p;//�����������캯��һ��

	p = new myLine[5];//���ÿ������캯�����
	cout << (*p).getLength() << endl;
	cout << (*(p + 1)).getLength() << endl;
	cout << p[1].getLength() << endl;

	delete[] p;//�����������캯�����

}


/* ����Ԫ��
�����Ԫ�����Ƕ��������ⲿ������Ȩ�����������˽�У�private����Ա�ͱ�����protected����Ա��
������Ԫ������ԭ��������Ķ����г��ֹ���������Ԫ���������ǳ�Ա������
��Ԫ������һ���������ú�������Ϊ��Ԫ��������ԪҲ������һ���࣬���౻��Ϊ��Ԫ�࣬����������£������༰�����г�Ա������Ԫ��
������Ԫ��������Ԫ�� :
friend void printLength(Line line1);
friend class myLine;
*/

//	cout<< "\n��Ԫ:" <<endl;
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
	//����printLength��myLine3�����Ԫ�����Է����κγ�Ա��
	//ע�⣺��Ԫ���ǳ�Ա�������ó�Ա���������"."���򿪡�
	cout << myline3.length << endl;
}

/*
cout<< "\n��Ԫ:" <<endl;
myLine3 myline3;
myline3.setLength(15.12);
printLength(myline3);

*/



/* ��inline��
����������ͨ������һ��ʹ�á����һ�������������ģ���ô�ڱ���ʱ����������Ѹú����Ĵ��븱��������ÿ�����øú����ĵط���
���������������κ��޸ģ�����Ҫ���±��뺯�������пͻ��ˣ���Ϊ��������Ҫ���¸���һ�����еĴ��룬���򽫻����ʹ�þɵĺ�����

�ؼ��� inline
���ඨ���еĶ���ĺ�������������������ʹû��ʹ�� inline ˵������

*/

class neilian
{
public:
	void print();
};
void neilian::print()
{
	cout << "�����ж���ĺ�������ʹû��inline�ؼ��֣�Ҳ��������������" << endl;
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

/* ��this��
C++ �У�ÿһ��������ͨ�� this ָ���������Լ��ĵ�ַ��
this ָ�������г�Ա��������������, ����ڳ�Ա�����ڲ�������������ָ����ö���

��Ԫ����û�� this ָ�룬��Ϊ��Ԫ������ĳ�Ա��ֻ�г�Ա�������� this ָ�롣 // �ѵ���Ԫ�������Ƕ���

*/
class myBox
{
	double length, width, high;
public:
	static int number;
	//���캯������
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
		cout << "\ncompare�ڲ����:" << endl;
		//
		cout << "this->v():" << this->v() << endl;
		cout << "(*this).v():" << (*this).v() << endl;
		cout << "bb->v():" << bb.v() << endl;
		cout << "(&bb)->v():" << (&bb)->v() << endl;
		//��ôthis����ָ�����ָ�롣��func28������֤��
		cout << "return:" << (this->v() > bb.v()) << endl;
		cout << endl;

		return this->v()  >  bb.v();
	}
	void printpoint()
	{
		cout << this << endl;
	}
};

/* ��ָ�����ָ�롿
ָ�����ָ�뷽ʽ��ָͬ��ṹ��ָ�롣ʵ���ϣ�����Կ�����һ�����к����Ľṹ��
����ָ�����ָ��ĳ�Ա����Ҫʹ�ó�Ա��������� ->���������ָ��ṹ��ָ��һ����
�����е�ָ��һ������������ʹ��ָ��֮ǰ����ָ����г�ʼ����

*/


/*
myBox::number = 0;

cout << "number: " << myBox::number << endl;

int a;
a = 3;

�⼸�䶼��ʾ��������û�д����������˵��������
*/


//double myBox::number = 0;������һ��ᱨ��
int myBox::number = 0;
void func28()
{
	cout << "func28" << endl;

	neilian test;
	test.print();

	cout << mymax(1.2, 3.4) << endl;
	cout << mymax(1.1, 0.4) << endl;
	cout << mymax(0.1125, 0.1125) << endl;


	cout << "\nthisָ��:" << endl;
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

	cout << "\nָ�����ָ��:" << endl;
	myBox *p1, *p2;
	p1 = &box1;
	p2 = &box2;

	box1.printpoint();
	cout << p1 << endl;
	box2.printpoint();
	cout << p2 << endl;
	//��Ȼ�����ڲ���thisָ�����ָ������ࡣ

	cout << "p1->v(): " << p1->v() << endl;
	cout << "p2->v(): " << p2->v() << endl;
	p1->compare(*p2);

	cout << "\n��̬���Ա:" << endl;


}



/* ��C++��ľ�̬��Ա��
�� static �ؼ����������Ա����Ϊ��̬��������������ĳ�ԱΪ��̬ʱ������ζ�����۴������ٸ���Ķ��󣬾�̬��Ա��ֻ��һ��������
��̬��Ա��������ж������ǹ���ġ���������������ĳ�ʼ����䣬�ڴ�����һ������ʱ�����еľ�̬���ݶ��ᱻ��ʼ��Ϊ�㡣
���ǲ��ܰѾ�̬��Ա�ĳ�ʼ����������Ķ����У����ǿ���������ⲿͨ��ʹ�÷�Χ��������� :: ������������̬�����Ӷ��������г�ʼ����

*/


