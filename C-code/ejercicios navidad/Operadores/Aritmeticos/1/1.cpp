#include <stdio.h>
#include <stdlib.h>

int main(){

	int nlista=0,fila=1,columna;

	printf("Número de lista -> \n");
	scanf(" %i",&nlista);

	while(nlista>17){
		nlista-=17;
		fila++;
	}
	columna=nlista;
	
	printf("Fila %i, columna %i. \n",fila,columna);

	//No me sale para poner limite en fila.

	return EXIT_SUCCESS;
}
