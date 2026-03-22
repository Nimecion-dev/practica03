#include <stdio.h>
#include <stdlib.h>

int pedirValor(char mensaje[]){
	int valor;
	printf("ingrese la cantidad de %s: ", mensaje);
	scanf("%d", &valor);
	return valor;
}

void darValor(){
	int cuartos, decimos, quintos, valorMonetario;
	cuartos = pedirValor("cuartos");
	decimos = pedirValor("decimos");
	quintos = pedirValor("quintos");
	valorMonetario = (25 * cuartos) + (10 * decimos) + (5 * quintos);
	printf("\nLas monedas valen %d centavos\n", valorMonetario);
}

int main(int argc, char *argv[])
{
	darValor();
	return 0;
}