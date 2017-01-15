#include <stdio.h>
#include <stdlib.h>

int main(){

	int nombre[]={97,108,118,97,114,111,0};

	for(int i=0;i<sizeof(nombre)/sizeof(int);i++)
		printf("%c",nombre[i]);
	
	printf("\n");

	return EXIT_SUCCESS;
}
