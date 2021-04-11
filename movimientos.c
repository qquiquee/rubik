#include "libreria.h"

void movimientos()
{
    char mov[2];
	int acabo=0;
    int contador=1;

	while (acabo == 0)
    {
        printf("Movimiento: ");
        fgets(mov, 3, stdin);


        for (int indice = 0; indice <2; ++indice)
		{
			mov[indice] = tolower(mov[indice]);
		}



if(strcmp(mov,"f\n") == 0){ //azul reloj
        printf("Movimiento %d %s \n",contador, mov);
contador++;
fmas();
pintaractual();
}
if(strcmp(mov,"f'") == 0){ //azul contrareloj
        printf("Movimiento %d %s \n",contador, mov);
contador++;
fmenos();
pintaractual();
}
if(strcmp(mov,"u\n") == 0){ //blanco reloj
        printf("Movimiento %d %s \n",contador, mov);
contador++;
umas();
pintaractual();
}
if(strcmp(mov,"u'") == 0){ //blanco contrareloj
        printf("Movimiento %d %s \n",contador, mov);
contador++;
umenos();
pintaractual();
}
if(strcmp(mov,"d\n") == 0){ //amarillo reloj
        printf("Movimiento %d %s \n",contador, mov);
contador++;
dmas();
pintaractual();
}
if(strcmp(mov,"d'") == 0){ //amarillo contrareloj
        printf("Movimiento %d %s \n",contador, mov);
contador++;
dmenos();
pintaractual();
}
 if(strcmp(mov,"l\n") == 0){ //rojo reloj
        printf("Movimiento %d %s \n",contador, mov);
contador++;
lmas();
pintaractual();
}
if(strcmp(mov,"l'") == 0){ //rojo contrareloj
        printf("Movimiento %d %s \n",contador, mov);
contador++;
lmenos();
pintaractual();
}
if(strcmp(mov,"r\n") == 0){ //naranja reloj
        printf("Movimiento %d %s \n",contador, mov);
contador++;
rmas();
pintaractual();
}
if(strcmp(mov,"r'") == 0){ //naranja contrareloj
        printf("Movimiento %d %s \n",contador, mov);
contador++;
rmenos();
pintaractual();
}
if(strcmp(mov,"b\n") == 0){ //verde reloj
        printf("Movimiento %d %s \n",contador, mov);
contador++;
bmas();
pintaractual();
}
if(strcmp(mov,"b'") == 0){ //verde contrareloj
        printf("Movimiento %d %s \n",contador, mov);
contador++;
bmenos();
pintaractual();
}  
        if (strcmp(mov,"al") == 0){
                ejecutaralgoritmos();
                }
        if (strcmp(mov,"00") == 0){acabo=1;}
    }
}