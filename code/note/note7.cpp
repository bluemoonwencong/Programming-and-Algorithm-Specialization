#include<iostream>
#include<cstring>
using namespace std;

// io��struct
// easy

/*
C++ �� I/O ���������У������ֽ����С�
����ֽ����Ǵ��豸������̡��������������������ӵȣ������ڴ棬��������������
����ֽ����Ǵ��ڴ������豸������ʾ������ӡ�����������������������ӵȣ�����������������

<iostream>	���ļ������� cin��cout��cerr �� clog ���󣬷ֱ��Ӧ�ڱ�׼����������׼��������ǻ����׼�������ͻ����׼��������
<iomanip>	���ļ�ͨ����ν�Ĳ��������������������� setw �� setprecision������������ִ�б�׼�� I/O ���õķ���
<fstream>	���ļ�Ϊ�û����Ƶ��ļ����������������ǽ����ļ�����������½���������ϸ�ڡ�


��׼�������cout��:
Ԥ����Ķ��� cout �� iostream ���һ��ʵ����cout ����"����"����׼����豸��ͨ������ʾ����cout ��������������� << ���ʹ�õ�.
C++ ����������Ҫ����������������ͣ�ѡ����ʵ����������������ʾֵ��
<< �����������������������ͣ����͡������͡�double �͡��ַ�����ָ�룩�������
endl ��������ĩ���һ�����з���

��׼��������cin��:
Ԥ����Ķ��� cin �� iostream ���һ��ʵ����cin ����������׼�����豸��ͨ���Ǽ��̡�cin ��������ȡ����� >> ���ʹ�õ�.

��׼��������cerr��:
Ԥ����Ķ��� cerr �� iostream ���һ��ʵ����cerr ����������׼�����豸��ͨ��Ҳ����ʾ�������� cerr �����Ƿǻ���ģ���ÿ�������뵽 cerr �������������

��׼��־����clog��:
Ԥ����Ķ��� clog �� iostream ���һ��ʵ����clog ����������׼�����豸��ͨ��Ҳ����ʾ�������� clog �����ǻ���ġ�
����ζ��ÿ�������뵽 clog �����ȴ洢�ڻ����ڣ�ֱ�������������߻�����ˢ��ʱ�Ż������


*/


void func24()
{
	char name[50];
	int age = 0;
	cout << "input your name and age:";
	cin >> name >> age;
	cout << "your name is:" << name << endl;
	cout << "your age is:" << age << endl;
	//C++ ����������Ҫ����ֵ���������ͣ�ѡ����ʵ�����ȡ���������ȡֵ���������洢�ڸ����ı����С�
	//����ȡ����� >> ��һ������п��Զ��ʹ�ã����Ҫ�����������ݣ����� cin >> name >> age����ͬ�� cin>>name; cin>>age;

	cerr << "error message!" << endl;
	clog << "error message!" << endl;

}

//ͨ����ЩСʵ���������޷����� cout��cerr �� clog �Ĳ��죬���ڱ�д��ִ�д��ͳ���ʱ������֮��Ĳ���ͱ�÷ǳ����ԡ�
//�������õı��ʵ���������ǣ�ʹ�� cerr ������ʾ������Ϣ������������־��Ϣ��ʹ�� clog ���������


//�ṹ�� C++ ����һ���û��Զ���Ŀ��õ��������ͣ����������洢��ͬ���͵������
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
	//����ֱ���޸ģ�̫����ˡ�
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


	//ָ��ṹ��ָ��
	//ʹ��ָ��ýṹ��ָ����ʽṹ�ĳ�Ա���� -> �����
	struct Books *p1;
	p1 = &book1;
	cout << p1->title << "\t";
	cout << p1->author << "\t";
	cout << p1->id << endl;



}


