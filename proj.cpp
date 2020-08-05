//proj.cpp
#include <iostream>
using namespace std;

struct queueactividad {
	char actividades [20];
	int frente, atras;
}q;
union{
	struct{
		int dia;
		char mes[10];
		int año;
	}inicio, fin;
}fecha;

void insert(struct queueactividad *q)
{ 
	char x[20];
	cout<<"Escribe el dato "<<endl;
	cin.getline(x, 20);
	if (q->atras == 20-1)
			q->atras = 0;
	else
		(q->atras)++;

	if (q->atras == q->frente) 
	{
		cout<<"queue overflow"<<endl;
		exit(1);
	}
	q->actividades[q->atras]='x';

	cout<<"Escribe el dia de inicio de la actividad "<<endl;
	cin>> fecha.inicio.dia;
	cout<<"Escribe el mes de inicio de la actividad "<<endl;
	cin>>fecha.inicio.mes;
	cout<<"Escribe el año de inicio de la actividad "<<endl;
	cin>>fecha.inicio.año;
	cout<<"Escribe el dia de termino de la actividad"<<endl;
	cin>>fecha.fin.dia;
	cout<<"Escribe el mes del fin de la actividad "<<endl;
	cin>>fecha.fin.mes;
	cout<<"Escribe el año de termino de la actividad "<<endl;
	cin>>fecha.fin.año;
	return; 
}
void comparar(int *day, char *month)
{
	int falta,i;
	if(fecha.inicio.dia < *day)
	{
		cout<<"Estas dentro del plazo"<<endl;
	}
	else 
	{
		for(i=0;i<20;i++)
		{
			if(fecha.fin.mes[i]=month[i])
				cout<<"Estas dentro del plazo de entrega "<<endl;
			exit(1);
		}
		cout<<"El plazo a concluido"<<endl;
	}
}
void actual()
{
	int dia, año;
	char mes[20];
	cout<<"Escribe el dia actual "<<endl;
	cin>>dia;
	cout<<"Escibe el mes actual "<<endl;
	cin>>mes;
	comparar(&dia, &mes[20]);
}
void main()
{	char op;
	do{
		insert(&q);
		cout<<"quieres insertar otra actividad "<<endl;
		cin>>op;
	}while(op == 's');
	actual();

}