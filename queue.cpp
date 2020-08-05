//queue.cpp
#include <iostream>
#define MAXQUEUE 10

using namespace std;
struct queue {
	int datos [MAXQUEUE];
	int frente, atras;
}q;

void insert(struct queue *pq)
{ 
	int x;
	cout<<"Escribe el dato "<<endl;
	cin>>x;
	if (pq->atras == MAXQUEUE-1)
			pq->atras = 0;
	else
		(pq->atras)++;

	if (pq->atras == pq->frente) 
	{
		cout<<"queue overflow"<<endl;
		exit(1);
	}
	pq->datos[pq->atras]=x;
	return; 
}
void mostrar(queue *mostrar)
{	
	int x;
	for(x=mostrar->atras; x!=0; x--)
		{
			cout<<mostrar->datos[x]<<endl;
		}
}
int remove(struct queue *pq)
{
	if (pq->frente == MAXQUEUE-1)
		pq->frente = 0;
	else
		(pq->frente)++;
	return (pq->datos[pq->frente]);
}
void prin()
{
	char d;
	int i;
	do{
		insert(&q);
		cout<<"Quieres insertar otro dato? "<<endl;
		cin>>d;
	}while(d=='s');
	
	mostrar (&q);
	i=remove(&q);
	cout<<"el dato es "<<i<<endl;
}

void main()
{
	prin();
}