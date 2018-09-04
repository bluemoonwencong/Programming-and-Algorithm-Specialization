#include<iostream>
using namespace std;

int main()
{
	int asay, bsay, csay, dsay;
	bool boundary1, boundary2;
	for (int p=1;p<5;p++)//poyang rank
		for (int d = 1; d<5; d++)//dongting rank
			for (int t = 1; t<5; t++)//taihu rank
				for (int h = 1; h < 5; h++)//hongze rank
				{
					asay = (d == 1) + (h == 4) + (p == 3);
					bsay = (h == 1) + (d == 4) + (p == 2) + (t == 3);
					csay = (h == 4) + (d == 3);
					dsay = (p == 1) + (t == 4) + (h == 2) + (d == 3);
					boundary1 = asay == 1 && bsay == 1 && csay == 1 && dsay == 1;
					boundary2 = p != d && d != t && t != h && h != p && p != t && d != h;
					if (boundary1 && boundary2)
					{
						//cout << "find!" << endl;
						//cout << asay << bsay << csay << dsay << endl;
						cout << p << '\n' << d << '\n' << t << '\n' << h << endl;
					}

				}
//	system("pause");
	return 0;
}//这种全空间搜索自然不好
/*
全空间搜索复杂度是O(N^4)
如果从现有资源搜索，复杂度是(a*b*c*d), a,b,c,d表示相应人员给出的可能性
但依旧不够聪明，如果能结合具体情况，可以进一步简化，比如“每人只有一句话为真”，
就可以在预处理阶段大量剪枝，，然后再搜索。甚至写出足够复杂的逻辑后，可以直接剪枝直接推理出答案。
en，基于矛盾的剪枝用于“经济节省”地砍掉大部分不可能，搜索用于不便写出复杂逻辑策略来剪枝时的策略。

*/

