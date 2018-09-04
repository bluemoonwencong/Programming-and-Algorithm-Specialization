#include<iostream>
#include<iomanip>
using namespace std;

int monthtotalday(int year, int month);
int main()
{
	int year, month, day;
	char eat;
	cin >> year >> eat >> month >> eat >> day;
	int monthday = monthtotalday(year, month);
	//cout << year << ',' << month << ',' << day << ',' << monthday << ',' << endl;
	if (day < monthday)
		cout << year << '-' << setfill('0') << setw(2) << month << '-' << setfill('0') << setw(2) << (day + 1) << endl;
	else// day == monthday
	{
		if (month < 12)
			cout << year << '-' << setfill('0') << setw(2) << (month + 1) << '-' << setfill('0') << setw(2) << 1 << endl;
		else// month == 12 && day == monthday
			cout << (year + 1) << '-' << setfill('0') << setw(2) << 1 << '-' << setfill('0') << setw(2) << 1 << endl;
	}
//	system("pause");
	return 0;
}

int isleafyear(int year)
{
	
	
	if (year % 1000 == 0 && year % 400 == 0)
		return 1;
	else if (year % 1000 == 0 && year % 400 != 0)
		return 0;
	else if (year % 4 == 0 && year % 100 != 0)
		return 1;
	else
		return 0;
}
int monthtotalday(int year, int month)
{
	bool eq1 = month == 1 || month == 3 || month == 5 || month == 7;
	bool eq2 = month == 8 || month == 10 || month == 12;
	if (eq1 || eq2)
		return 31;
	else if (isleafyear(year) == 1 && month == 2)
		return 28;
	else if (isleafyear(year) == 0 && month == 2)
		return 29;
	else
		return 29;
}

