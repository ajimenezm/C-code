#include <stdio.h>
#include <stdlib.h>

int main(){

	int i,num,sum=0;

	printf("Pon un numero: \n");
	scanf(" %i",&num);

	for(i=1;i<num;i++){
		if(num %i==0){
			sum+=i;
		}}

	if(sum==num){
		printf("El numero %i es perfecto \n",num);
	}
	else
		printf("El numero %i no es perfecto \n",num);
	
	return EXIT_SUCCESS;
}
