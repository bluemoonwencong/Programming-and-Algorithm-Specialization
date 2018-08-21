#include<iostream>
using namespace std;

void week7func1()
{
	int n, m;
	cin >> n >> m;
	//不会环链，怎么办才好呢？
	int succedent[300], precedent[300];
	for (int i = 0; i < n; i++)
	{
		succedent[i] = (i + 1) % n;
		//第0只猴子后面是第1只猴子，第n只猴子后面是第0只猴子
		precedent[i] = (i - 1) % n;
	}

	int current = 0;
	while (1)
	{
		for (int count = 0; count < m - 1; count++)
			current = succedent[current];
		int pre = precedent[current];
		int suc = succedent[current];
		succedent[pre] = suc;
		precedent[suc] = pre;
		if (pre == suc)
		{
			cout << pre + 1 << endl;
			break;
		}
		current = suc;
	}
}

void week7func2()
{
	int n, a[100][2];
	cin >> n;



	//读取完毕
	int q = 0, p = 0;
	for (int i = 0; i < n; i++)
	{
		q += a[i][0];
		p += a[i][1];
	}
	int gcd = mygcd(q, p);
	cout << q / gcd << "/" << p / gcd << endl;

}

int mygcd(int a, int b)
{
	int tmp;
	while (b%a != 0)
	{
		if (a > b)
		{
			tmp = a;
			a = b;
			b = tmp;
		}
		b = b % a;
	}
	cout << a << endl;
}//greatest common divisor



void week7func3()
{
	int n, a[100];
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];
	int count1, count2, count3, count4;
	count1 = count2 = count3 = count4 = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] <= 18){
			count1 += 1;
		}
		else if (19 <= a[i] <= 35){
			count2 += 1;
		}
		else if (36 <= a[i] <= 60){
			count3 += 1;
		}
		else{
			count4 += 1;
		}
	}
	cout << "1-18: " << count1 / n << "%";
	cout << "19-35: " << count2 / n << "%";
	cout << "36-60: " << count3 / n << "%";
	cout << "60-: " << count4 / n << "%";
}

