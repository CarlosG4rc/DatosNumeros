//Factorial.cpp
#include <iostream>
using namespace std;

long long int fact(long long int n)
{
	long long int x, y;
	if (n==0)
		return(1);
	x=n-1;
	y= fact(x);
	return(n*y);
}

void ff()
{
	long long int n,y;
	cout<<"Escribe el valor de n "<<endl;
	cin>>n;
	y=fact(n);
	cout<<"El factorial de "<<n<<" es "<<y<<endl;
}

void main()
{
	ff();
}