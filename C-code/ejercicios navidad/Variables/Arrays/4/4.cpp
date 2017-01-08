#include <stdio.h>
#include <stdlib.h>

int main(){

	int x,y,z,cont;

	x=0;
	y=1;

	printf("0 \n 1 \n",z);

	for(cont=1;cont<=20;cont=cont+1){
		z=x+y;
		printf(" %i \n",z);
		x=y;
		y=z;
	}

	return EXIT_SUCCESS;
}
