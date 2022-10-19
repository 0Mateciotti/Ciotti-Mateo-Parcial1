#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "Color.h"
#include "moto.h"
int hardcodearColor(eColor color[], int tam_c){
    int todoOk = 0;

    eColor auxColor[] = {{10000,"Gris"},
    				     {10001,"Negro"},
                         {10002,"Azul"},
						 {10003,"Blanco"},
						 {10004, "Rojo"}};



    if(color != NULL && tam_c > 0){
        for(int i = 0 ; i < tam_c ; i++){
            color[i] = auxColor[i];

        }
        todoOk = 1;
    }

    return todoOk;
}
int listarDescripcionColor(eColor color[]){
	int todoOk=0;

	if(color != NULL){
		printf("Descripcion\n");

		printf("%s\n",color->id,color->nombreColor);

	}

	return todoOk;
}
int listarColores(eColor color[],int tam_c){
	int todoOk=0;

	if(color != NULL && tam_c >0){
		printf("ID     Descripcion\n");
		for(int i=0;i<tam_c;i++){
		printf("%-4d   %s\n",color[i].id,color[i].nombreColor);
		}
	}

	return todoOk;
}
