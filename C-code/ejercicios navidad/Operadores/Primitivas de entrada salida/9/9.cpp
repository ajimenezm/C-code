#include <stdio.h>
#include <stdlib.h>

int main(){

	char nombre[15],apellido[15];

	printf("Dime tu nombre: \n");
	scanf(" %s",nombre);
	printf("Dime tu apellido: \n");
	scanf(" %s",apellido);

	printf("Tu nombre y apellido son: %s %s \n",nombre,apellido);

	return EXIT_SUCCESS;
}
