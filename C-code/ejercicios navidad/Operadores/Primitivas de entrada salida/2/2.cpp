#include <stdio.h>
#include <stdlib.h>

int main(){

	char nombre[10];

	printf("Dime tu nombre: \n");
	scanf(" %s",nombre);

	printf("Te llamas %s \n",nombre);

	return EXIT_SUCCESS;
}
