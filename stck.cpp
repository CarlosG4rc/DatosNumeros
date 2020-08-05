//stck.cpp
#include <iostream>
using namespace std;

typedef struct rat{
	int numerator;
	int denominator;
}RATIONAL;

void reduce(struct rat *inrat, struct rat *outrat)
{
	int a,b,res;
	if (inrat->numerator>inrat->denominator)
	{
		a=inrat->numerator;
		b=inrat->denominator;
	}
	else
	{
		a=inrat->denominator;
		b=inrat->numerator;
	}
	while(b != 0)
	{
		res=a/b;
		a=b;
		b=res;
	}
	outrat->numerator/=a;
	outrat->denominator/=a;
}
void equal(struct rat *rat1, struct rat *rat2)
{
	struct rat r1,r2;
	reduce (rat1, &r1);
	reduce (rat2, &r2);
	if (r1.numerator == r2.numerator && r1.denominator == r2.denominator)
	{
		cout<<"r1 y r2 son iguales"<<endl;
	}
	else
	{
		cout<<"Son distintos"<<endl;
	}
}
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
	equal(&r1,&r2);
}


void main()
{
	rtl();
}