#include <stdio.h>
#include <stdlib.h>

int main(){

	int vector1[2],vector2[2],formula;

	printf("Dame un número: \n");
	scanf(" %i",&vector1[0]);
	printf("Dame otro número: \n");
	scanf(" %i",&vector1[1]);


	printf("Dame un número: \n");
	scanf(" %i",&vector2[0]);
	printf("Dame otro número: \n");
	scanf(" %i",&vector2[1]);

	formula=vector1[0]*vector2[0]+vector1[1]*vector2[1];

	printf("El valor es: %i \n",formula);

	return EXIT_SUCCESS;
}
