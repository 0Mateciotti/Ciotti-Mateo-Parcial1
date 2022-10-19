#include "Tipo.h"
#include "Color.h"
#include "Servicio.h"
#include "Moto.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define TAM_T 4
#define TAM_C 5
#define TAM_S 4
#define TAM 3

int menu();
int main(void) {

	char seguir[4]= "si";
	int flagA=0;

	eTipo tipo[TAM_T];
	eColor colores[TAM_C];
	eServicio servicio[TAM_S];
	eMoto moto[TAM];

	hardcodearTipo(tipo,TAM_T);
	hardcodearColor(colores,TAM_C);
	hardcodearServicio(servicio,TAM_S);
	inicializarMoto(moto,TAM);

	do{

		switch(menu()){

				case 'A':{
						altaMoto(moto,tipo,colores,TAM_T,TAM_C,TAM);
						flagA=1;
					break;
				}case'B':{
					modificarMotos(moto,tipo,TAM_T,TAM);
					break;
				}case 'C':{
					if(!flagA){
						printf("Ingrese almenos una moto antes.\n");
						system("PAUSE");
					}else if(flagA){
					bajaMoto(moto,TAM);
					}
					break;
				}case 'D':{
					break;
				}case 'E':{
					break;
				}case 'F':{
					break;
				}case 'G':{
					break;
				}case 'H':{
					break;
				}case 'I':{
					break;
				}case 'J':{
					break;
				}





				}






	}while(strcmp(seguir,"si")==0);









	return EXIT_SUCCESS;
}
int menu(){

	char respuesta;
		system("CLS");
		printf("*** Menu Principal ***\n\n");

		printf("A-Alta moto.\n");
		printf("B-Modificar moto.\n");
		printf("C-Baja Motos.\n");
		printf("D-Listar Motos.\n");
		printf("E-Listar tipos.\n");
		printf("F-Listar colores.\n");
		printf("G-Listar servicios.\n");
		printf("H-Alta trabajo.\n");
		printf("I-Lisar trabajos.\n");
		printf("J-Salir.\n\n");

		printf("Ingrese una opcion: ");
		scanf("%c",&respuesta);
		return respuesta;
	}


