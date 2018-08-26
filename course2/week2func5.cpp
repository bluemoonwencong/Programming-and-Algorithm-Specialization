#include<iostream>
using namespace std;

void exchange(int *p1, int *p2);
void doubleexchange(double *p1, double *p2);
int main()
{
//	int a = 3, b = 5;
//	cout << a << b << endl;
//	exchange(&a, &b);
//	cout << a << b << endl;
	
	int n, number[100], before[100], after[100];
	double rate[100];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> number[i] >> before[i] >> after[i];
		rate[i] = double(after[i]) / double(before[i]);
	}
	
//	cout << "input:" << endl;
//	for (int i = 0; i < n; i++)
//		cout << number[i] << ' ' << before[i] << ' ' << after[i] << ' ' << rate[i] << endl;
	
	double doubletmp;
	int inttmp;
	for (int i=0;i<n;i++)
		for (int j = 1; j < n - 0; j++)
			if (rate[j - 1] > rate[j])
			{
				doubleexchange(&rate[j], &rate[j - 1]);
				exchange(&number[j], &number[j - 1]);
				exchange(&before[j], &before[j - 1]);
				exchange(&after[j], &after[j - 1]);
			}
	
//	cout << "sort:" << endl;
//	for (int i = 0; i < n; i++)
//		cout << number[i] << ' ' << before[i] << ' ' << after[i] << ' ' << rate[i] << endl;

	double diff[100];
	diff[0] = 0;
	for (int i = 1; i < n; i++)
		diff[i] = rate[i] - rate[i - 1];
//	for (int i = 0; i < n; i++)
//		cout << diff[i] << ' ';

	int id = 0;
	double max = diff[id];
	for (int i = 1; i < n; i++)
		if (diff[i] > max)
		{
			id = i;
			max = diff[id];
		}

	cout << n - id << endl;
	for (int i = id; i < n; i++)
		cout << number[i] << endl;
	cout << id << endl;
	for (int i = 0; i < id; i++)
		cout << number[i] << endl;

//	system("pause");
	return 0;
}

inline void exchange(int *p1, int *p2)
{
	int cache = *p1;
	*p1 = *p2;
	*p2 = cache;
}
inline void doubleexchange(double *p1, double *p2)
{
	double cache = *p1;
	*p1 = *p2;
	*p2 = cache;
}

/*
 5
 1 10 3456
 2 10 5644
 3 10 4566
 4 20 234
 5 20 232

*/
