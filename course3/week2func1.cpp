#include<iostream>
#include<ctype.h>
using namespace std;

class student
{
private:
	char name[50] = { '\0' };
	int age, number, a, b, c, d;
public:
	double mean(void) {
		return (a + b + c + d) / 4;
	}
	void setname(char x[]);
	void getname(void);
	void setage(int x);
	int getage(void);
	void setnumber(int x);
	int getnumber(void);
	void setabcd(int x1, int x2, int x3, int x4);
};

void student::setname(char x[]) {
	int len = 0;
	while (x[len] != '\0') len += 1;
	for (int i = 0; i < len; i++)
		name[i] = x[i];
}

void student::getname(void) {
	cout << name;
}
void student::setage(int x) {
	age = x;
}
int student::getage(void) {
	return age;
}
void student::setnumber(int x) {
	number = x;
}
int student::getnumber(void) {
	return number;
}
void student::setabcd(int x1, int x2, int x3, int x4) {
	a = x1; b = x2; c = x3; d = x4;
}

int main()
{
	student s1;
	char eat, name[50];
	int age, number, a, b, c, d;
	cin.get(name, 50, ',');
	cin >> eat >> age >> eat >> number >> eat >> a >> eat >> b >> eat >> c >> eat >> d;

	//	cout << name << endl;
	//	cout << age << endl;
	//	cout << number << endl;
	//	cout << a << endl;
	//	cout << b << endl;
	//	cout << c << endl;
	//	cout << d << endl;

	s1.setname(name);
	s1.setage(age);
	s1.setnumber(number);
	s1.setabcd(a, b, c, d);

	s1.getname();
	cout << eat;
	cout << s1.getage() << eat;
	cout << s1.getnumber() << eat;
	cout << s1.mean();


//	system("pause");
	return 0;
}
// Tom,18,7817,80,80,90,70
