#include<iostream>
#include <iomanip>
using namespace std;

int main()
{
	int n, a[100];
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];
	int count1, count2, count3, count4;
	count1 = count2 = count3 = count4 = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] <= 18) {
			count1 += 1;
		}
		else if (19 <= a[i] && a[i] <= 35) {
			count2 += 1;
		}
		else if (36 <= a[i] && a[i] <= 60) {
			count3 += 1;
		}
		else {
			count4 += 1;
		}
	}
	cout << "1-18: "  << fixed << setprecision(2) << 100.0 * double(count1) / double(n) << "%" << endl;
	cout << "19-35: " << fixed << setprecision(2) << 100.0 * double(count2) / double(n) << "%" << endl;
	cout << "36-60: " << fixed << setprecision(2) << 100.0 * double(count3) / double(n) << "%" << endl;
	cout << "60-: "   << fixed << setprecision(2) << 100.0 * double(count4) / double(n) << "%" << endl;
//	system("pause");
	return 0;
}
