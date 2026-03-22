#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int cuartos, decimos, quintos, valorMonetario;
	printf("ingrese la cantidad de cuartos: ");
	scanf("%d",&cuartos);
	printf("ingrese la cantidad de cuartos: ");
	scanf("%d",&decimos);
	printf("ingrese la cantidad de cuartos: ");
	scanf("%d",&quintos);
	valorMonetario = (25 * cuartos) + (10 * decimos) + (5 * quintos);
	printf("\nLas monedas valen %d centavos\n", valorMonetario);
	return 0;
}