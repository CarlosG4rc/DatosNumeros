//str_c
#include <iostream>

using namespace std;

void main()
{
	int i;
	struct nametype {
		char first[20];
		char midinit;
		char last[20];
	};
	struct nametype sname, ename;
	
	ename.midinit = 'm';

	cout<<"Nombre "<<endl;
	cin.getline(ename.first, 20);
	
	for(i=0;i<20;i++)
		sname.first[i]=ename.first[i];

	cout<<"first "<<sname.first<<endl;
	cout<<"midinit "<<ename.midinit<<endl;
	
}