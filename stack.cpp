//stack.cpp
#include <iostream>
#define STACKSIZE 10
#define TRUE 1
#define FALSE 0
using namespace std;

struct pila{
	int tope;
	int datos[STACKSIZE];
};

void vaciar(pila *ps)
{
	ps->tope=-1;
}
int empty(struct pila *ps)
{
	if (ps->tope==-1)
		return(TRUE);
	else 
		return(FALSE);
}
void push(struct pila *ps)
{
	int x;
	if (ps->tope== STACKSIZE-1) 
	{
		cout<<"stack overflow";
		exit(1); 
	}
	else
	{
		cout<<"escribe el dato "<<endl;
		cin>>x;
		ps->datos[++(ps->tope)]=x;
	}
	return;
}
void mostrarpila(pila *mostrar)
{
	struct pila s;
	if(empty(&s)==1)
		{
			cout<<"NO HAY DATOS"<<endl;
		}
	else
	{
		for(int x=0; x<mostrar->tope+1; x++)
		{
			cout<<mostrar->datos[x]<<endl;
		}
	}
}
int pop(struct pila *ps)
{
	if (empty(ps)) 
	{
		cout<<"stack underflow"<<endl;
		exit(1 );
	}
	return (ps->datos [ps->tope--]);
}
void menu()
{
	int i;
	char op,x;
	struct pila s;
	vaciar(&s);
	do{
		push(&s);
		cout<<"Quieres introducir otro dato?"<<endl;
		cin>>x;
	}while(x=='s');
	system("cls");
	mostrarpila(&s);
	i=pop(&s);
	cout<<"el dato es " <<i<<endl;
	mostrarpila(&s);
}
void main()
{
	menu();
}