

#include <stdio.h>
#include <stdlib.h>

int main(){

	int rojo,amarillo,azul;

	printf("Antes de comenzar he de decir que para decir que SI hay que poner un 1, sino, hay que poner un 0.\n");
	printf("¿Tienes color rojo?\n");
	scanf(" %i",&rojo);

	printf("¿Tienes color amarillo?\n");
	scanf(" %i",&amarillo);

	printf("¿Tienes color azul?\n");
	scanf(" %i",&azul);

	if (rojo)
		if (amarillo)
			if (azul)
			printf("Marrón\n");
			else
			printf("Naranja\n");
		else
			if (azul)
			printf("Morado\n");
			else
			printf("Rojo\n");
	else
		if(amarillo)
			if (azul)
			printf("Verde\n");
			else
			printf("Amarillo\n");
		else
			if (azul)
			printf("Azul\n");
			else
			printf("Blanco\n");

	return EXIT_SUCCESS;
}
