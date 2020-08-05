//str.cpp
#include <iostream>
#define VIGAS 1
#define CONTENEDORES 2
using namespace std;
void main()
{
	int i;
	struct material {
		int cantidad;
		int kind;
	}c;
	union{
		struct{
			int largo;
			int ancho;
			char material[10];
		}vigas;
		struct{
			int alto;
			int volumen;
			char material[10];
		}contenedores;
	}caractmat;
	struct material m;
	cout<<"1; vigas" <<endl<<"2; contenedores"<<endl;
	cin>>m.kind;
	if(m.kind==VIGAS)
	{	cout<<"cantidad: "<<endl;
		cin>>c.cantidad;
		cout<< "largo"<<endl;
		cin>>caractmat.vigas.largo;
		cout<<"el largo es: "<<caractmat.vigas.largo<<endl;
		cout<<"ancho: "<<endl;
		cin>>caractmat.vigas.ancho;
		cout<<"el ancho es: "<<caractmat.vigas.ancho<<endl;
		cout<<"material: "<<endl;
		cin>>caractmat.vigas.material;
		cout<<"el material es: "<<caractmat.vigas.material<<endl;
	}
}