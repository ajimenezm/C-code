#include <stdio.h>
#include <stdlib.h>

int main(){

	int x,y,z;

	x=0;
	y=1;

	printf(" 1 \n");

	for(int i=1;i<=20;i=i+1){
		z=x+y;
		printf(" %i \n",z);
		x=y;
		y=z;
	}

	return EXIT_SUCCESS;
}
