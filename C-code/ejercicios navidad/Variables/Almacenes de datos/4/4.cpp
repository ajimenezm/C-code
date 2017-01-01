#include <stdio.h>
#include <stdlib.h>

int main(){

	int comodin, n1, n2;

	printf("A continuación te voy a pedir 2 número para posteriormente intercambiar sus lugares.\n");
	printf("Dame un número: \n");
	scanf(" %i", &n1);
	printf("Dame otro número: \n");
	scanf(" %i", &n2);

	comodin = n1;
	n1 = n2;
	n2 = comodin;

	printf("El primer valor ahora es: %i \n", n1);
	printf("El segundo valor ahora es: %i \n", n2);

	return EXIT_SUCCESS;
}
