#include <stdio.h>
#include <stdlib.h>

int main(){
	int verde,azul,rojo;

	printf("Antes de comenzar he de decir que para decir que SI hay que poner un 1, sino, hay que poner un 0.\n");
	printf("¿Tienes color verde?\n");
	scanf(" %i",&verde);

	printf("¿Tienes color azul?\n");
	scanf(" %i",&azul);

	printf("¿Tienes color rojo?\n");
	scanf(" %i",&rojo);

	if (verde)
		if (azul)
			if (rojo)
			printf("negro\n");
			else
			printf("Cian\n");
		else
			if (rojo)
			printf("Amarillo\n");
			else
			printf("Verde\n");
	else
		if(azul)
			if (rojo)
			printf("Magenta\n");
			else
			printf("Azul\n");
		else
			if (rojo)
			printf("Rojo\n");
			else
			printf("Blanco\n");

	return EXIT_SUCCESS;
}
