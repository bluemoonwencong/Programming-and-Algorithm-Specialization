#include<iostream>
#include<string>
#include <limits>
using namespace std;

// ���á�����ʱ��


/*
���ñ�����һ��������Ҳ����˵������ĳ���Ѵ��ڱ�������һ�����֡�
������������Ǳ����������ڴ�λ���еı�ǩ�����԰����õ����Ǳ����������ڴ�λ���еĵڶ�����ǩ��
��ˣ�����ͨ��ԭʼ�������ƻ����������ʱ��������ݡ�

����ͨ�����ں��������б�ͺ�������ֵ��

���ú�������ָ�����������֮����������Ҫ�Ĳ�ͬ��
a.�����ڿ����á����ñ������ӵ�һ��Ϸ����ڴ档
b.һ�����ñ���ʼ��Ϊһ�����󣬾Ͳ��ܱ�ָ����һ������ָ��������κ�ʱ��ָ����һ������
c.���ñ����ڴ���ʱ����ʼ����ָ��������κ�ʱ�䱻��ʼ����
d.û�����õ����þ͵������ã�����ָ��һ�����Գ���״��
*/



void func22()
{
	cout << "func22:" << endl;
	int i = 25;
	int& s = i;
	int& d = i;
	int& sd = s;
	//����Щ�����У�& �������á�
	cout << s << endl;
	cout << d << endl;
	cout << sd << endl;


}


/*
C++ ��׼��û���ṩ��ν���������͡�C++ �̳��� C �����������ں�ʱ������Ľṹ�ͺ�����
���ĸ���ʱ����ص����ͣ�clock_t��time_t��size_t �� tm��
���� clock_t��size_t �� time_t �ܹ���ϵͳʱ������ڱ�ʾΪĳ��������

�ṹ���� tm �����ں�ʱ���� C �ṹ����ʽ����:
struct tm {
int tm_sec;   // �룬������Χ�� 0 �� 59���������� 61
int tm_min;   // �֣���Χ�� 0 �� 59
int tm_hour;  // Сʱ����Χ�� 0 �� 23
int tm_mday;  // һ���еĵڼ��죬��Χ�� 1 �� 31
int tm_mon;   // �£���Χ�� 0 �� 11
int tm_year;  // �� 1900 ���������
int tm_wday;  // һ���еĵڼ��죬��Χ�� 0 �� 6��������������
int tm_yday;  // һ���еĵڼ��죬��Χ�� 0 �� 365���� 1 �� 1 ������
int tm_isdst; // ����ʱ
}

C �⺯�� time_t time(time_t *seconds) �����Լ�Ԫ Epoch��1970-01-01 00:00:00 UTC���𾭹���ʱ�䣬����Ϊ��λ��
��� seconds ��Ϊ�գ��򷵻�ֵҲ�洢�ڱ��� seconds �С�

C �⺯�� char *ctime(const time_t *timer) ����һ����ʾ����ʱ����ַ���������ʱ���ǻ��ڲ��� timer�����ص��ַ�����ʽ���£�
Www Mmm dd hh:mm:ss yyyy ���У�Www ��ʾ���ڼ���Mmm ������ĸ��ʾ���·ݣ�dd ��ʾһ���еĵڼ��죬hh:mm:ss ��ʾʱ�䣬yyyy ��ʾ��ݡ�





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
	//sec3��ָ��sec2��ָ�룬time�����������ָ��ָ��ı��������ݸ��£�ͬʱ����������¡�
	//������һ���Ч���൱�� sec1=time(&sec2)
	//sec3ʼ���ǲ���ġ�
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
