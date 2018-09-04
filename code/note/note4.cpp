#include <iostream>
#include<cmath>
#include <ctime>
using namespace std;

#include<iomanip>
using std::setw;


// ���ݽ��ӣ����Դ��Կ�����
// rand, array, string

void func8()
{
	cout << cos(3.14) << endl;
	//�����Ƶ�
}
/*
1	double cos(double);
2	double sin(double);
3	double tan(double);
4	double log(double);
�ú������ز�������Ȼ������
5	double pow(double, double);
�����һ������Ϊ x���ڶ�������Ϊ y����ú������� x �� y �η���
6	double hypot(double, double);
�ú�����������������ƽ���ܺ͵�ƽ������Ҳ����˵������Ϊһ��ֱ�������ε�����ֱ�Ǳߣ������᷵��б�ߵĳ��ȡ�
7	double sqrt(double);
8	int abs(int);
9	double fabs(double);
�ú�����������һ��ʮ�������ľ���ֵ��
10	double floor(double);
�ذ�����ú�������һ��С�ڻ���ڴ�����������������
*/

void func9()
{
	//srand( (int)time(NULL) );
	srand(1.125);
	//������srand(1)�̶����ӡ����������1.25�ᱻת��Ϊ unsigned int ���͡�
	//time����time_t���ͣ�00:00:00 GMT, January 1, 1970
	//unsigned������ת����Ҳ������int,float
	for (int i = 0; i < 10; i++)
	{
		cout << rand() << endl;
	};
	srand(1);// ������Ӻ�1.25Ч��һ����
			 //rand()�����У����������ָ�����ӣ�ÿ�����е�rand()����֮ǰ��һ����
	for (int i = 0; i < 10; i++)
	{
		auto cache = rand();
		cout << cache << endl;
		cout << cache % 5 << endl;
	};

}

/*
���е����鶼�����������ڴ�λ����ɡ�
type arrayName [size1][size2][size3][size4];
type ������������Ч�� C++ �������ͣ�arrayName ��һ����Ч�� C++ ��ʶ����
*/

void func10()
{
	double mylist[5] = { 25, 23.0, 56, 87, 55.1542355 };
	cout << mylist[4] << endl;

	int mylist2[10];
	for (int i = 0; i < 10; i++)
	{
		mylist2[i] = 100 + i;
	};
	cout << "Element" << setw(6) << "Value" << setw(5) << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << i << setw(7) << mylist2[i] << setw(5) << endl;
	}

}

void func11()
{
	cout << "��ά���飺" << endl;
	int val[3][4] = {
		{ 1,2,3,4 },
	{ 5,6,7,8 },
	{ 9,10,11,12 }
	};
	//int val[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};Ч��Ҳ��ȫһ����
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << val[i][j] << endl;
		}
	};

	for (int &a : val[0])
	{
		cout << a << endl;
	}

}


/*
�ַ���ʵ������ʹ�� null �ַ� '\0' ��ֹ��һά�ַ����顣

*/
void func12()
{
	char gg[] = { 'H', 'e', 'l', 'l', 'o', '\0' };
	cout << "func12:" << endl;
	cout << gg << endl;

	char str1[20] = "Hello";
	char str2[20] = "World";
	char str3[20];
	cout << "str1 length: " << strlen(str1) << endl;
	cout << "str3 length: " << strlen(str3) << endl;
	for (char &i : str1)
	{
		cout << i << endl;
	};

	strcpy_s(str3, str1);
	cout << "str3 content: " << str3 << endl;
	cout << "str3 length: " << strlen(str3) << endl;
	//str3���ں�str1һ��,������Ҳ��33��Ϊ5�ˡ�

	strcat_s(str1, str2);
	cout << str1 << endl;
	cout << strlen(str1) << endl;
	//����֮��str1����Ϊ10

}

/*
C++ ��׼���ṩ�� string �֧࣬���������еĲ��������⻹��������������Ĺ��ܡ�
*/

#include<string>
void func13()
{
	cout << "func13:" << endl;
	string str1 = "Hello";
	string str2 = "World";
	string str3;
	int len;

	str3 = str1;
	cout << "str3 cntent: " << str3 << endl;
	str3 = str1 + str2;
	cout << "str3 cntent: " << str3 << endl;
	len = str3.size();
	cout << "str3 length: " << len << endl;
	cout << str3.length() << endl;


}


