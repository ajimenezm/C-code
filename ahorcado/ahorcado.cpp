#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(){

#define f 20
#define c 20
#define MAX 29
#define CANTIDAD(x) (sizeof( (x) ) / sizeof(char *) - 1)


const char *elegida;
char oculta[MAX];
char letra;
int aleatoria,aciertos=0,fallos=0,pregunta;
const char *palabra[f][c]= {
    "pierna",
    "camion",
    "alfombra",
    "ordenador",
    "cortina",
    "ola",
    "comida",
    "shuriken",
    "rueda",
    "cuadrado"
    };

srand(time(NULL));
    aleatoria=rand()%CANTIDAD(palabra);
    elegida=palabra[aleatoria];

    bzero(oculta, MAX);
    for (int i=0;i<(int)strlen(elegida);i++)
        oculta[i]='-';

    printf("\t%s\n",oculta);
    printf("\t%s\n",elegida);

    do{
	printf("\nDame una letra: \n");
	scanf(" %c", &letra);

	for(int i=0;i<(int)strlen(elegida);i++){
		if(elegida[i]==letra)
		oculta[i]=letra;
		printf(" %c", oculta[i]);
		}

	printf("\n");

	for (int cont=0;cont<7;cont++) {
        	if (letra==elegida) {aciertos++;}
        	else {fallos=fallos+1}
		}

        	if (fallos==0) printf("Enhorabuena, has hecho un pleno ;)\n");
        	if (fallos==1) printf(" __ \n");
        	if (fallos==2) printf("_|_\n");
        	if (fallos==3) {printf("  _ _\n");
                         printf("  | \n");
                         printf("  | \n");
                         printf(" _|_  \n");
			}
        	if (fallos==4){printf ("  __ \n");
                         printf (" .--. \n");
                         printf (" | \n");
                         printf ("_|_ \n");
			}

		if (fallos==5){printf (" __ \n");
                         printf (".--.\n");
                         printf ("|  o \n");
                         printf ("|  | \n");
                         printf("_|_   \n");
			}

        	if (fallos==6){printf ("  _ _ \n");
                         printf (" .--. \n");
                         printf (" |  o \n");
                         printf (" |  | \n");
                         printf ("_|_/|\ \n");
			}

	while(fallos=6){
		printf("Ooooh..., lo siento, perdiste, ¿Quieres intentarlo de nuevo?\nNo=0\nSi=1\n");
		scanf(" %i",&pregunta);
			if(pregunta==0)
				return 0;

			else(pregunta==1)
				goto main();
	}}
