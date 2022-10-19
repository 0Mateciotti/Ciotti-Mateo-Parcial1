

#ifndef COLOR_H_
#define COLOR_H_

typedef struct{

	int id;
	char nombreColor[20];
}eColor;

#endif /* COLOR_H_ */

int hardcodearColor(eColor color[], int tam_c);
int listarColores(eColor color[],int tam_c);
int listarColor(eColor color[],int tam_c);
