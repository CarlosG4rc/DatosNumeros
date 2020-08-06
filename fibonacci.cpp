//fibonacci.cpp
#include <iostream>
using namespace std;

int fib (int n)
{
	int lofib=0, hifib=1, x, i;
	if (n <= 1)
		return(n);
	else
		for (i=2; i<=n; i++)
			{
				x=lofib;
				lofib=hifib;
				hifib=x + lofib;
				cout<<hifib<<endl;
			}
	return(hifib);
}
void iofib()
{	int n,num;
	cout<<"Escriba el valor de n "<<endl;
	cin>>n;
	num=fib(n);
	cout<<"El valor es "<<num<<endl;
}

void main()
{
	iofib();
}
