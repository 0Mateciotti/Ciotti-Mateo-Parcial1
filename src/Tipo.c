#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "Tipo.h"
#include "Moto.h"

int hardcodearTipo(eTipo tipo[], int tam_t){
    int todoOk = 0;

    eTipo auxTipo[] = {{1000,"Enduro"},
            {1001,"Chopera"},
            {1002,"Scooter"},
            {1003,"Vintaje"}};



    if(tipo != NULL && tam_t > 0){
        for(int i = 0 ; i < tam_t ; i++){
            tipo[i] = auxTipo[i];

        }
        todoOk = 1;
    }

    return todoOk;
}
int idAeroToDescripcion(eMoto moto[],char descripcion[]){
	int todoOk=0;

	if(moto !=NULL && descripcion != NULL){

	if(moto->idTipo == 1000){
		todoOk=1;
		strcpy(descripcion,"Enduro");
	}else if(moto->idTipo == 1001){
		todoOk=1;
		strcpy(descripcion,"Chopera");
	}else if(moto->idTipo == 1002){
		todoOk=1;
		strcpy(descripcion,"Scooter");
	}else if(moto->idTipo == 1003){
		todoOk=1;
		strcpy(descripcion,"Vintaje");
	};

}
	return todoOk;
}
int listarTipos(eTipo tipo[],int tam_t){
	int todoOk=0;

	if(tipo != NULL && tam_t >0){
		printf("ID     Descripcion\n");
		for(int i=0;i<tam_t;i++){
		printf("%-4d   %s\n",tipo[i].id,tipo[i].descripcion);
		}
	}

	return todoOk;
}
