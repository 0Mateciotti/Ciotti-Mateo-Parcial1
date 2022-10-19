

#ifndef TIPO_H_
#define TIPO_H_

typedef struct{

	int id;
	char descripcion[20];

}eTipo;


#endif /* TIPO_H_ */

int hardcodearTipo(eTipo tipo[], int tam_t);
int listarTipos(eTipo tipo[],int tam_t);
