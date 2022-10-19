#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "Servicio.h"

int hardcodearServicio(eServicio servicio[], int tam_s){
    int todoOk = 0;

    eServicio auxServicio[] = {{20000,"Limpieza",450},
    						   {2001,"Ajuste",300},
							   {20002,"Balanceo",150},
							   {20003,"Cadena",390}};



    if(servicio != NULL && tam_s > 0){
        for(int i = 0 ; i < tam_s ; i++){
            servicio[i] = auxServicio[i];

        }
        todoOk = 1;
    }

    return todoOk;
}
