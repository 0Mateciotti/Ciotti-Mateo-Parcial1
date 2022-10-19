#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "Moto.h"
#include "Tipo.h"
#include "Color.h"
#include "validar.h"


int altaMoto(eMoto moto[],eTipo tipo[],eColor color[],int tam_t,int tam_c,int tam){
	int todoOk=0;
	eMoto auxMoto;
	int indice;
	indice = buscarLibre(moto,tam);

	if(moto !=NULL && tipo != NULL && color !=NULL&& tam_t>0&&tam_c>0&&tam>0){

		system("CLS");
		printf("*** Alta Moto ***\n\n");
		printf("Ingrese ID de la moto: ");
		scanf("%d",&auxMoto.id);

		system("CLS");
		printf("*** Alta Moto ***\n\n");
		printf("Ingrese Marca de la moto: ");
		scanf("%s",auxMoto.marca);

		system("CLS");
		printf("*** Alta Moto ***\n\n");
		listarTipos(tipo,tam_t);
		printf("Ingrese id de tipo de la moto: ");
		scanf("%d",&auxMoto.idTipo);

		validarIdTipo(auxMoto.idTipo,moto,tipo,tam_t);

		system("CLS");
		printf("*** Alta Moto ***\n\n");
		listarColores(color,tam_c);
		printf("Ingrese id de tipo de color: ");
		scanf("%d",&auxMoto.idColor);
		validarIdColor(auxMoto.idColor,moto,color,tam_c);
		system("CLS");
		printf("*** Alta Moto ***\n\n");
		printf("Ingrese cilindradas de la moto: ");
		scanf("%d",&auxMoto.cilindrada);
		validarCilindrada(&auxMoto.cilindrada,moto);

		system("CLS");
		printf("*** Alta Moto ***\n\n");
		printf("Ingrese puntaje de la moto: ");
		scanf("%d",&auxMoto.puntaje);
		while(validarEntero(auxMoto.puntaje,1,10)){
			printf("Puntaje de moto no valido, reingreselo: ");
			scanf("%d",&auxMoto.puntaje);
		}



		moto[indice] = auxMoto;
	}

	return todoOk;
}
int inicializarMoto(eMoto moto[],int tam){

	int todoOk =0;
if(moto != NULL && tam>0){
	for(int i = 0;i<tam;i++){


		moto[i].isEmpty = 1;

		todoOk=1;
	}
}

	return todoOk;
}
int modificarMotos(eMoto moto[],eTipo tipo[],int tam_t,int tam){

	int todoOk=0;
	int id;
	int flag=1;
	int respuesta;
	int indice;


	if(moto !=NULL && tipo != NULL && tam_t>00&&tam>0){

		system("CLS");
		printf("*** Modificar Moto ***\n\n");

		printf("Ingrese el id de la moto que quiere modificar: \n");
		scanf("%d",&id);


		for (int i=0;i<tam;i++){

					if(moto[i].id == id){
						printf("que desea modificar?\n");
						printf("ID Color     Puntaje\n");
						printf("1)%d     2)%2d",moto[i].idColor,moto[i].puntaje);
						scanf("%d",&respuesta);
						flag =1;
						todoOk=1;
						indice=i;
						break;
									   }
							}
					if(flag == 0){
					printf("No se encontraron motos con esa ID.");
					}else if(flag && respuesta ==1){

						printf("Ingrese nuevo ID de color: ");
						scanf("%d",&moto[indice].idColor);
					}else if(flag && respuesta ==2){
						printf("Ingrese nuevo puntaje: ");
						scanf("%d",&moto[indice].puntaje);
					}
		}
	return todoOk;
}
	int bajaMoto(eMoto moto[],int tam){

		int todoOk=0;
		int id;
		int flag=0;

		if(moto!=NULL&&tam>0){
				printf("Ingrese el id de la moto que quiere dar de baja: ");
				scanf("%d",&id);


			for (int i=0;i<tam;i++){

				if(moto[i].id == id){
					moto[i].isEmpty = 1;
					printf("Moto dada de baja satifactoriamente.\n");
					flag =1;
					break;
				}
				}
				if(flag == 0){
					printf("No se encontraron motos con esa id.");
				}
			todoOk=1;
		}
		return todoOk;
	}


