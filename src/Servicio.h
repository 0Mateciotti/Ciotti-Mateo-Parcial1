

#ifndef SERVICIO_H_
#define SERVICIO_H_

typedef struct{

	int id;
	char descripcion[25];
	int precio;

}eServicio;

#endif /* SERVICIO_H_ */
int hardcodearServicio(eServicio servicio[], int tam_s);
