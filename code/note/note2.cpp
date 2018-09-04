#include<iostream>
#include<string>
#include<cctype>
using namespace std;

/*
ʹ�� #define Ԥ��������
ʹ�� const �ؼ��֡�*/
/*
����������0x �� 0X ��ʾʮ�����ƣ�0 ��ʾ�˽��ƣ�����ǰ׺��Ĭ�ϱ�ʾʮ���ƣ�
��׺�����Ǵ�д��Ҳ������Сд��U �� L ��˳�����⡣

�ַ����������ڵ������С���������� L��������дʱ����ͷ�����ʾ����һ�����ַ����������� L'x'������ʱ������洢�� wchar_t ���͵ı����С�
����������һ��խ�ַ����������� 'x'������ʱ�����Դ洢�� char ���͵ļ򵥱����С�

�ַ�������ֵ����������˫���� "" �еġ�


*/

#define n_W 56
int myconst()
{
	const float n_H = 23e-3;
	cout << n_H << endl;
	cout << n_W << endl;
	return 0;
}

/*
���η� signed��unsigned��long �� short ��Ӧ�������ͣ�signed �� unsigned ��Ӧ�����ַ��ͣ�long ��Ӧ����˫�����͡�
*/

void myint()
{
	short int a = 50000;
	short unsigned int b = 50000;
	cout << a << " " << b;

}

/*

for ( init; condition; increment )
{
statement(s);
}
1.init �����ȱ�ִ�У���ֻ��ִ��һ�Ρ���һ����������������ʼ���κ�ѭ�����Ʊ�������Ҳ���Բ�������д�κ���䣬ֻҪ��һ���ֺų��ּ��ɡ�
2.�����������ж� condition�����Ϊ�棬��ִ��ѭ�����塣���Ϊ�٣���ִ��ѭ�����壬�ҿ���������ת�������� for ѭ������һ����䡣
3.��ִ���� for ѭ������󣬿���������������� increment ��䡣���������������ѭ�����Ʊ����������������գ�ֻҪ����������һ���ֺų��ּ��ɡ�
4.�����ٴα��жϡ����Ϊ�棬��ִ��ѭ����������̻᲻���ظ���ѭ�����壬Ȼ�����Ӳ�ֵ����Ȼ�������ж�����������������Ϊ��ʱ��for ѭ����ֹ��

*/
void func1()
{
	for (int a = 0; a<10; a = a + 1)
	{
		cout << a << endl;
	}
}


/*
����for����ĵ�һ���ֶ��屻��������Χ�����ı���������������һ��forѭ���ı���һ�������������ֻ��ѭ���ķ�Χ������":"֮��ĵڶ����飬�����������ķ�Χ��
���Ǿ�Ȼ�ܸı������Χ��ֵ������  c++������Ʋ��װɣ�
*/
void func2()
{
	int my_array[5] = { 1, 2, 3, 4, 5 };
	// ÿ������Ԫ�س��� 2
	cout << "init" << endl;
	cout << "my_array[0]: " << my_array[0] << endl;
	cout << "my_array[4]: " << my_array[4] << endl;
	cout << "my_array[5]: " << my_array[5] << endl;
	cout << "my_array[6]: " << my_array[6] << endl;

	for (int &x1 : my_array)
	{
		x1 *= 2;
		cout << x1 << endl;
	}//����Ҫ��Խpython�Ľ�����
	cout << "after once" << endl;
	cout << "my_array[0]: " << my_array[0] << endl;
	cout << "my_array[4]: " << my_array[4] << endl;
	cout << "my_array[5]: " << my_array[5] << endl;
	cout << "my_array[6]: " << my_array[6] << endl;


	// auto ����Ҳ�� C++11 �±�׼�еģ������Զ���ȡ����������
	for (auto &x2 : my_array) {
		x2 *= 2;
		cout << x2 << endl;
	}
	cout << "after twice" << endl;
	cout << "my_array[0]: " << my_array[0] << endl;
	cout << "my_array[4]: " << my_array[4] << endl;
	cout << "my_array[5]: " << my_array[5] << endl;
	cout << "my_array[6]: " << my_array[6] << endl;

}

void func3()
{
	string str("some string");
	// range for ���  
	for (char &c : str)
	{
		c = toupper(c);
	}
	cout << str << endl;
}







