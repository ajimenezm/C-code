#include <stdio.h>
#include <stdlib.h>

int main(){

	char p1[25],p2[25],fusion[50];

	printf("Palabra 1 -> \n");
	scanf(" %s",p1);
	printf("Palabra 2 -> \n");
	scanf(" %s",p2);
	sprintf(fusion,"%s %s",p1,p2);

	printf("Las palabras son: %s \n",fusion);

	return EXIT_SUCCESS;
}
