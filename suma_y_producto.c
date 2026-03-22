#include <stdio.h>
#include <stdlib.h>

int pedirEntero(char numero[]){
	int entero;
	printf("Inserte el entero %s: ", numero);
	scanf("%d",&entero);
	return entero;
} 

void calcular(){
	int enteroUno, enteroDos, suma, producto;
	enteroUno=pedirEntero("uno");
	enteroDos=pedirEntero("dos");
	suma = enteroUno+enteroDos;
	producto = enteroUno*enteroDos;
	printf("la suma de los enteros es: %d\n", suma);
	printf("el producto de los enteros es: %d\n", producto);
	printf("Este es el fin del programa");
}
int main(int argc, char *argv[])
{
	calcular();
	return 0;
}
