#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
	int enteroUno, enteroDos, suma, producto;
	printf("Inserte el entero uno: ");
	scanf("%d",&enteroUno);
	printf("Inserte el entero dos: ");
	scanf("%d",&enteroDos);
	suma = enteroUno+enteroDos;
	producto = enteroUno*enteroDos;
	printf("la suma de los enteros es: %d\n", suma);
	printf("el producto de los enteros es: %d\n", producto);
	printf("Este es el fin del programa");
	return 0;
}
