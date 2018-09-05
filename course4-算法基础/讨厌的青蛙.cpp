#include<iostream>
#include <algorithm>
using namespace std;

/*
直接枚举所有可能的直线，还要枚举步长，O(n^3)，不可行。
还是一样，要解析！
这次的策略重点：合理排除不可能情况，二分搜索
*/

struct Plants { int x, y; };
Plants plants[5000];
int r, c, n;
int searchPath(Plants p1, int dx, int dy);

int main()
{
	int max = 2;
	cin >> r >> c >> n;
	for (int i = 0; i < n; i++)
		cin >> plants[i].x >> plants[i].y;
	sort(plants, plants + n);
	for (int i = 0; i < n; i++)
		cout << plants[i].x << ',' << plants[i].y << endl;

	for (int i=0;i<n-2;i++)
		for (int j = i + 1; j < n - 1; j++)
		{
			int dx = plants[j].x - plants[i].x;
			int dy = plants[j].y - plants[i].y;
			int prex = plants[i].x - dx;
			int prey = plants[i].y - dy;
			if (prex >= 1 && prex <= r && prey >= 1 && prey <= c)
				continue;
			int guessmaxpx = plants[i].x + (max - 1)*dx;
			int guessmaxpy = plants[i].y + (max - 1)*dx;
			if (guessmaxpx > r)
				break;
			if (guessmaxpy > c || guessmaxpy < 1)
				continue;
			int steps = searchPath(plants[j], dx, dy);
			//cout << "mark:" << steps << endl;
			if (steps > max) max = steps;
		}
	if (max == 2) { system("pause"); return 0; }
	cout << max << endl;

	system("pause");
	return 0;
}

bool operator < (const Plants &p1, const Plants &p2)
{
	if (p1.x == p2.x)
		return p1.y < p2.y;
	return p1.x < p2.x;
}

int searchPath(Plants p1, int dx, int dy)
{
	Plants plant;
	int step = 2;
	plant.x = p1.x + dx;
	plant.y = p1.y + dy;
	while (plant.x >= 1 && plant.x <= r && plant.y >= 1 && plant.y <= c)
	{
		if (!binary_search(plants, plants + n, plant))
		{
			step = 0;
			break;
		}
		plant.x += dx;
		plant.y += dy;
		step++;
	}
	return step;
}

/*
Input:
6 7 14 2 1 6 6 4 2 2 5 2 6 2 7 3 4 6 1 6 2 2 3 6 3 6 4 6 5 6 7
Output:
7

*/

