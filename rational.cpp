//rational.cpp
#include <iostream>
using namespace std;

typedef struct {
	float numerator;
	float denominator;
}RATIONAL;

void rtl()
{
	RATIONAL r1,r2;
	cout<<"Escribe el numerador de 1 "<<endl;
	cin>>r1.numerator;
	cout<<"Escribe el denominador de 1 "<<endl;
	cin>>r1.denominator;
	cout<<"Escribe el numerador de 2 "<<endl;
	cin>>r2.numerator;
	cout<<"Escribe el denomenador de 2 "<<endl;
	cin>>r2.denominator;
	if (r1.numerator== r2.numerator && r1.denominator==r2.denominator)
	{
		cout<<"r1 y r2 son iguales"<<endl;
	}
	else if((r1.numerator/r1.denominator)==(r2.numerator/r2.denominator))
	{
		cout<<"r1 y r2 son iguales"<<endl;
	}
	else
	{
		cout<<"r1 y r2 son diferentes"<<endl;
	}
}

void main()
{
	rtl();
}