#include<iostream>
#include<string>
#include <limits>
using namespace std;

/*
ѧϰ C++ ��ָ��ȼ�����Ȥ��ͨ��ָ�룬���Լ�һЩ C++ ��������ִ�У�����һЩ�����綯̬�ڴ���䣬û��ָ�����޷�ִ�еġ�
���ԣ���Ҫ��Ϊһ������� C++ ����Ա��ѧϰָ���Ǻ��б�Ҫ�ġ�

ÿһ����������һ���ڴ�λ�ã�ÿһ���ڴ�λ�ö������˿�ʹ�����ֺţ�&����������ʵĵ�ַ������ʾ�����ڴ��е�һ����ַ��
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
	//��������cout<<c[10]��ʱ������г���

	short int d[5] = { 23,32,14,56,55 };
	cout << "d adress: " << &d << endl;
	cout << "d[0] adress: " << &d[0] << endl;
	cout << "d[1] adress: " << &d[1] << endl;
	cout << "d[2] adress: " << &d[2] << endl;
	cout << "d[3] adress: " << &d[3] << endl;
	cout << "d[4] adress: " << &d[4] << endl;
	cout << "d[8] adress: " << &d[8] << endl;
	cout << "bool: \t\t" << "��ռ�ֽ�����" << sizeof(bool) << endl;
	cout << "bool max:" << (numeric_limits<bool>::max)() << "         ";
	cout << "bool min:" << (numeric_limits<bool>::min)() << endl;
	cout << "short: \t\t" << "��ռ�ֽ�����" << sizeof(short) << endl;
	cout << "short max:" << (numeric_limits<short>::max)() << "         ";
	cout << "short min:" << (numeric_limits<short>::min)() << endl;
	cout << "short int: \t" << "��ռ�ֽ�����" << sizeof(short int) << endl;
	cout << "short int max:" << (numeric_limits<short int>::max)() << "         ";
	cout << "short int min:" << (numeric_limits<short int>::min)() << endl;

}
/*
��������������ʮ���ơ��˽��ƻ�ʮ�����Ƶĳ�����ǰ׺ָ��������0x �� 0X ��ʾʮ�����ƣ�0 ��ʾ�˽��ƣ�����ǰ׺��Ĭ�ϱ�ʾʮ���ơ�
��������Ҳ���Դ�һ����׺����׺�� U �� L ����ϣ�U ��ʾ�޷���������unsigned����L ��ʾ��������long������׺�����Ǵ�д��Ҳ������Сд��U �� L ��˳�����⡣
*/


/*
ָ����һ����������ֵΪ��һ�������ĵ�ַ�������ڴ�λ�õ�ֱ�ӵ�ַ������������������һ������������ʹ��ָ��洢����������ַ֮ǰ���������������
type *var-name;
type ��ָ��Ļ����ͣ���������һ����Ч�� C++ �������ͣ�var-name ��ָ����������ơ�
int    *ip;    // һ�����͵�ָ��
double *dp;    // һ�� double �͵�ָ��
float  *fp;    // һ�������͵�ָ��
char   *ch;    // һ���ַ��͵�ָ��
����ָ���ֵ��ʵ���������ͣ����������͡������͡��ַ��ͣ������������������ͣ�����һ���ģ�����һ�������ڴ��ַ�ĳ���ʮ����������
��ͬ�������͵�ָ��֮��Ψһ�Ĳ�ͬ�ǣ�ָ����ָ��ı����������������Ͳ�ͬ��

ʹ��ָ��ʱ��Ƶ���������¼���������
����һ��ָ��������ѱ�����ַ��ֵ��ָ�롢����ָ������п��õ�ַ��ֵ��


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

// �� C++ �У��кܶ�ָ����صĸ����Щ����ܼ򵥣����Ƕ�����Ҫ��

// 1.NULL, ָ���Լӣ���С�Ƚϡ�
void func16()
{
	cout << "func16:" << endl;
	cout << "NULL: " << NULL << endl;
	//NULL �Ķ�����ǣ�define NULL 0


	int e[5] = { 23,2,1,45,2 };
	int *ip;
	ip = e;
	//������ָ�븳��ip�ķ�ʽ�е��ر𣬵� ip=&e �ᱨ�������� ip=&e[0]��
	cout << '\n' << endl;
	cout << e << endl;
	cout << &e[0] << endl;
	cout << ip << endl;
	//cout << (ip++) << endl;
	//ip++��ʹip��ֵ��1�����ǲ��᷵�ؼ�1֮���ֵ����������������� cout<<ip<<endl һ����

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
	cout << "\nָ��ıȽϣ�" << endl;
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

	cout << "int: \t\t" << "��ռ�ֽ�����" << sizeof(int) << "\t";
	cout << "int max:" << (numeric_limits<int>::max)() << "\t";
	cout << "int min:" << (numeric_limits<int>::min)() << endl;


}


// 2.ָ���������������صġ���ʵ�ϣ�ָ��������ںܶ�������ǿ��Ի����ġ�
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
		//Ȼ����ָ������鲢������ȫ�����ġ�
		//��ָ������� * Ӧ�õ� var ������ȫ���Եģ����޸� var ��ֵ�ǷǷ��ġ�
		//������Ϊ var ��һ��ָ�����鿪ͷ�ĳ�����������Ϊ��ֵ��
	};
}

/* 3.ָ��ָ���ָ����һ�ֶ༶���Ѱַ����ʽ������˵��һ��ָ������һ��ָ��ָ���ָ�����������������:
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


// 4.��ָ�봫�ݸ�������
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
	//par�Ǵ��ݽ�����ָ�룬�����ָ���Ӧ�����ݸĳ� time(NULL)

}



// �����ܽ���ָ����Ϊ�����ĺ�����Ҳ�ܽ���������Ϊ����
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
	//��ͽ������ں��� avg1 �д����������һ��ָ�루��Ȼ��ָ�����飩��ȴ����ֱ�Ӱ�ָ�뵱�����ã���ԭ��
	//��Ϊ��ԭ��ָ�뱾���Ϳ�����[]���ǵģ����� +, -, ++, --, <, >, == �� &, * ���⣬ָ�뻹������[]���ݣ�p[3] ��ͬ�� *(p+3)��

	return avg;
};


/* 5.�Ӻ�������ָ��
Ϊ��������㣬��������һ������ָ��ĺ�����������ʾ��
int *myfunc()
{
pass;
};

���⣬C++ ��֧���ں����ⷵ�ؾֲ������ĵ�ַ�����Ƕ���ֲ�����Ϊ static ������
���� static �࣬
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
	//�԰���ָ��� sizeof ��ʲô�أ�
	//�Ǹ�ָ�����洢���ֽ������ڱ��������һ��ָ��ռ��4�ֽ��ڴ�ռ䣬4*8=32���ѵ��ҵıʼǱ���32λ�ģ�����
	//
	//���ϣ�
	//��������ָ�����Ŀռ��С�Ǻ�CPU��Ѱַ������صģ�����32λ��CPU������Ѱַ����Ϊ32λ����ô����ռ�Ҳ��ռ�ĸ��ֽڡ�
	//��ʵ�����㶨��ʲô����ָ�����ͣ�����ռ�ֻ���������ַ��ֻռ�ĸ��ֽڣ��������ÿռ�����ĵ�ַ����һ���ڴ���׵�ַ�ź��������ָ��������ء�
	//
	//ָ����ռ�õĿռ���ָ��ָ������ݺ����ݵĴ�С�޹ء�
	//�ڲ�ͬ�Ĳ���ϵͳ�����뻷���£�ָ��������ռ�õ��ֽ����ǲ�ͬ�ġ�
	//��������16λ�Ĵ���ʱ��ָ��ռ2���ֽ�
	//��������32λ�Ĵ���ʱ��ָ��ռ4���ֽ�
	//��������64λ�Ĵ���ʱ��ָ��ռ8���ֽ�

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
	// ���ﲻ��ֱ�Ӱ�n��ֵ�����鶨�壬�������Ϊ������Ҫ����֪�������������ĳ������滮�ڴ�ʹ�á�
	static int arr[12] = { 23,22 };

	//arr[15] = 555;
	// !!!����Σ��
	//����ֻ����������д��һ���������ⳤ�ȵ�����ĺ�������;��Ū�������鳤�Ȼ᲻������ΪӰ���±仯�����������ǲ�����ĩβ����ô��ǣ����Ҿ͸ı��ǡ�
	//���ǣ������������Ķ������ǿ�ָ�밡�������ã�
	//�ղ�û�����Ҿ����� static ������һ����˵Ҳ��֣���static֮������֮������е�ַ��Ĭ��Ϊ0��
	//��Ȼ�����ܣ���ʵ���Ͼ��������ġ�

	for (int i = 0; i < 15; i++)
	{
		cout << "arr[" << i << "] adress: " << &arr[i] << "\t";
		cout << "content: " << arr[i] << endl;
	};

	cout << "sizeof arr: " << sizeof(arr) / sizeof(arr[0]) << endl;
	//sizeof�᷵���ֽ�����

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



