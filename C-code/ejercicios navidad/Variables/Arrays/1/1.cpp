#include <stdio.h>
#include <stdlib.h>

int main(){

	int x,tabla[10];

	for(x=1;x<=10;x++){

	tabla[x]=x;
	}

	for(x=1;x<=10;x++){

	printf(" %i \n",tabla[x]);
	}

	return EXIT_SUCCESS;
}
