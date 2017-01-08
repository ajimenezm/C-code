#include <stdio.h>
#include <stdlib.h>

int main(){

	int numero,x;
	double suma=0;

	for(x=1;x<=10;x++){

		printf("Dame un numero: \n");
		scanf(" %i",&numero);
		suma=suma+numero;
	}

	printf("La media es: %i \n",suma/10);
	return EXIT_SUCCESS;
}
