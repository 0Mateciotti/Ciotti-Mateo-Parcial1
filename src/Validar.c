
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "Tipo.h"
#include "Moto.h"

int validarIdTipo(int ID,eMoto moto[], eTipo tipo[],int tam_t){
	int todoOk=0;

	if(tipo!= NULL && moto !=NULL && tam_t > 0){

		while(ID != 1000 && ID != 1001 && ID != 1002 && ID != 1003){
			printf("Id de tipo invalida, reingrese una id valida: ");
			scanf("%d",&ID);
			todoOk=1;
		}
}
	return todoOk;
}
int validarIdColor(int ID,eMoto moto[], eColor color[],int tam_c){
	int todoOk=0;

	if(color!= NULL && moto !=NULL && tam_c > 0){

		while(ID != 10000 && ID != 10001 && ID != 10002 && ID != 10003 &&ID != 10004){
			printf("Id de color invalida, reingrese una id valida: ");
			scanf("%d",&ID);
			todoOk=1;
		}
}
	return todoOk;
}
void validarCilindrada(int cilindrada,eMoto moto[]){

	while(cilindrada !=50 && cilindrada !=125 && cilindrada !=500 && cilindrada !=600 && cilindrada !=750){

		printf("Ingrese una cilindrada valida: ");
		scanf("%d",&cilindrada);
	}


}
int buscarLibre(eMoto moto[],int tam){

	int posicionLibre = -1;

	for(int i =0;i<tam;i++){

		if(moto[i].isEmpty){
			posicionLibre = i;

			break;
		}
}

	return posicionLibre;
}
int validarEntero(int entero, int min, int max){

	int todoOk = 0;

	if(entero < min || entero > max){
		todoOk=1;
	}
	return todoOk;
}
