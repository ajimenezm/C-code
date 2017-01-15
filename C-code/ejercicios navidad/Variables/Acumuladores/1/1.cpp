#include <stdio.h>
#include <stdlib.h>

int main(){

	int numero;
	double suma=0;
	double media;
	for(int i=0;i<10;i++){

		printf("Dame un numero: \n");
		scanf(" %i",&numero);
		suma=suma+numero;
	}
	media=suma/10;
	printf("La media es: %.2lf \n",media);
	return EXIT_SUCCESS;
}
