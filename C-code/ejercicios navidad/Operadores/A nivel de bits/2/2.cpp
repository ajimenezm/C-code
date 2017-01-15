#include <stdio.h>
#include <stdlib.h>

int main(){

	int numero;

	printf("Escribe un numero: \n");
	scanf(" %i",&numero);

	printf("El numero en hexadecimal es: %X \n",numero);

	return EXIT_SUCCESS;
}
