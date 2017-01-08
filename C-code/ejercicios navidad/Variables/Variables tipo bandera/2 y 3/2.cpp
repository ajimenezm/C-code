#include <stdio.h>
#include <stdlib.h>

int main(){

	int numero,p,mayor=0,menor=999999;
	for(p=0;p<10;p=p+1){

	printf("Mete el %i numero: \n",p+1);
	scanf("%i",&numero);

	if(numero>mayor)
	mayor=numero;
	if(numero<menor)
	menor=numero;
	}

	printf("El mayor es: %i \n",mayor);
	printf("El menor es: %i \n",menor);
	return EXIT_SUCCESS;
}
