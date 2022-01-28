#include <stdio.h>
int main(int argc, char *argv[])
{
	int a, b, prod;
	int somma = 0;
	do
	{
		printf("Inserisci a\n");
		scanf("%d", &a);
		printf("Inserisci b\n");
		scanf("%d", &b);
		prod = a*b;
		printf("\n\tIl prodotto è: %d\n\n", prod);
		somma = somma + prod;
	}while(a != 0 && b != 0)
  printf("\n\tLa somma è: %d\n\n", somma);
	return 0;
}
