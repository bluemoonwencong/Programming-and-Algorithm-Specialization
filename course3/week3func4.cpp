#include<iostream>
using namespace std;



class myarray;
int main()
{
	int time = 0, casenumber, M;
	cin >> casenumber >> M;
	myarray strengtharray;
	cin >> strengtharray.dragon >> strengtharray.ninja >> strengtharray.iceman >> strengtharray.lion >> strengtharray.wolf;
	
	
	int redstopflag = 0;

	warrior man;
	headquarter head;
	man.setcolor();
	man.setname(time); //"iceman";
	man.setid();
	man.setstrength(time);
	head.settotalnumber(time);

	if (redLeft > 0 && redstopflag == 0)
	{
		cout << time << "red" << name << id << "with strength" << strength << totalnumber << name << "in red headquarter";
	}
	else
	{
		cout << "red" << "headquarter stops making warriors";
		redstopflag = 1;
	}
	






	system("pause");
	return 0;
}



class myarray{
public:
	int dragon, ninja, iceman, lion, wolf;
};

class warrior {
public:
	char name[10], color[5];
	int id, strength;
	warrior()
	{
		name[0] = { '\0' };
		color[0] = { '\0' };
		id = strength = 0;
	}
};
class headquarter
{
public:
	int number[5] = { 0,0,0,0,0 };
};


