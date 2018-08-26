#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char c[80];
	cin.getline(c, 80, '\n');
	int num_a, num_e, num_i, num_o, num_u;
	num_a = num_e = num_i = num_o = num_u = 0;
	for (int i = 0; i < strlen(c); i++)
	{
		if ((c[i]) == 'a') num_a += 1;
		if ((c[i]) == 'e') num_e += 1;
		if ((c[i]) == 'i') num_i += 1;
		if ((c[i]) == 'o') num_o += 1;
		if ((c[i]) == 'u') num_u += 1;
		//		cout << "i:" << i << " c[i]:" << c[i] << " aeiou:";
		//		cout << num_a << num_e << num_i << num_o << num_u << " tolower(c[i]):" << tolower(c[i]) << endl;
	}
	//	cout << "output:" << endl;
	cout << num_a << ' ' << num_e << ' ' << num_i << ' ' << num_o << ' ' << num_u << endl;

	//	system("pause");
	return 0;
}

