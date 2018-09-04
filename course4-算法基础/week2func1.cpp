#include<iostream>
using namespace std;

int main()
{
	int t, n;
	cin >> t;
	for (int read = 0; read < t; read++)
	{
		char matrix[16][16] = { '\0' };
		cin >> n;
		for (int i = 0; i < n; i++) cin >> matrix[i];
		for (int i = 0; i < n; i++) cout << matrix[i] << endl;

		//读入完毕，对读入的数组操作
		bool isover;
		for (int count = 0; count < n*n; count++)
		{
			isover = true;
			for (int i = 0; i < n; i++)
				for (int j = 0; j < n; j++)
					if (matrix[i][j] == 'w')
					{ isover = false; break; }
			if (isover == true)
			{ cout << count << endl; break; }





		}
		if (isover == false) cout << "inf" << endl;

	}

	system("pause");
	return 0;
}



/*
2 3 yyy yyy yyy 5 wwwww wwwww wwwww wwwww wwwww

*/