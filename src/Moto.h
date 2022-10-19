#include "tipo.h"
#include "color.h"
#ifndef MOTO_H_
#define MOTO_H_

typedef struct{

	int id;
	char marca[20];
	int idTipo;
	int idColor;
	int cilindrada;
	int puntaje;
	int isEmpty;
}eMoto;

#endif /* MOTO_H_ */
int altaMoto(eMoto moto[],eTipo tipo[],eColor color[],int tam_t,int tam_c,int tam);
int modificarMoto(eMoto moto[],eTipo tipo[],eColor color[],int tam_t,int tam_c,int tam);
int inicializarMoto(eMoto moto[],int tam);
int bajaMoto(eMoto moto[],int tam);
int modificarMotos(eMoto moto[],eTipo tipo[],int tam_t,int tam);
