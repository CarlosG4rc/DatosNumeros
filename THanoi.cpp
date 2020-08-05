#include <stdio.h>
void towers(int, char, char, char);
void towers(int n, char origen, char destino, char auxiliar)
{
	 if (n==1)
	{
		printf("\n%s %c %s %c " , " mover disco 1 de", origen, " a", destino);
		return;
	}
	towers(n-1, origen, auxiliar, destino);
	printf("\n%s %d %s %c %s %c", " mover disco", n, "de",origen, " a", destino);
	towers(n-1, auxiliar, destino, origen);
}
void main()
{
	int n;
	printf("Escribe el valor de n \n");
	scanf("%d", &n);
	towers(n, 'O', 'D', 'A');
}