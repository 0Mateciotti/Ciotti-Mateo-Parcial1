#include "moto.h"
#include "Tipo.h"
#ifndef VALIDAR_H_
#define VALIDAR_H_



#endif /* VALIDAR_H_ */
int validarIdTipo(int ID, eMoto moto[],eTipo tipo[],int tam_t);
int validarIdColor(int ID,eMoto moto[], eColor color[],int tam_c);
void validarCilindrada(int* cilindrada,eMoto moto[]);
int buscarLibre(eMoto moto[],int tam);
int validarEntero(int entero, int min, int max);
