#include <stdio.h>
#include <stdlib.h>

int main(){

	int num,cont,x;

       	printf("Introduzca número: ");
	scanf("%d",&num);

	cont=0;

	for (x=1;x<=num;x++){
		if (num%x==0){
	cont++;
	}}

			 if (cont==2 || num==1 || num==0){
			 printf("Es primo\n");
			 }
			 else{
	 printf("No es primo\n");
	  }
	return EXIT_SUCCESS;
}
