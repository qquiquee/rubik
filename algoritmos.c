#include "libreria.h"

void ejecutaralgoritmos()
{

        char cadena[1024];
        int contador;
		int contadormov;
        char orden[2];

        printf("Algoritmo: ");
        getchar();
        fgets(cadena,1024,stdin);
//%[^\n]

if ((strlen(cadena) > 0) && (cadena[strlen(cadena)-1] == '\n'))
    {
        cadena[strlen(cadena)-1]='\0';
    }

        for (int indice = 0; cadena[indice] != '\0'; ++indice)
		{
			cadena[indice] = tolower(cadena[indice]);
		}

        printf("Algoritmo: '%s' \n",cadena);

contador=0;
contadormov=1;
while (cadena[contador] !='\0')
{
    orden[0]='%';
    orden[1]='%';

if (cadena[contador] != ' ')
    {
    orden[0]=cadena[contador];
        if (cadena[contador + 1] != ' ')
        { 
            orden[1] = cadena[contador + 1];
			contador++;
        }    
    }

if ((orden[0] != '%') && (orden[1] != '%'))// o algun ' o uno con 2
{
	if((orden[0]=='u') && (orden[1]=='2'))
	{ 
        printf("Movimiento %d %c%c \n",contadormov, orden[0],orden[1]);
		contadormov++;
		umas();
		umas();
		pintaractual();
	} 
	if((orden[0]=='f') && (orden[1]=='2'))
	{ 
        printf("Movimiento %d %c%c \n",contadormov, orden[0],orden[1]);
		contadormov++;
		fmas();
		fmas();
		pintaractual();
	} 
	if((orden[0]=='d') && (orden[1]=='2'))
	{ 
        printf("Movimiento %d %c%c \n",contadormov, orden[0],orden[1]);
		contadormov++;
		dmas();
		dmas();
		pintaractual();
	} 
	if((orden[0]=='l') && (orden[1]=='2'))
	{ 
        printf("Movimiento %d %c%c \n",contadormov, orden[0],orden[1]);
		contadormov++;
		lmas();
		lmas();
		pintaractual();
	} 
	if((orden[0]=='r') && (orden[1]=='2'))
	{ 
        printf("Movimiento %d %c%c \n",contadormov, orden[0],orden[1]);
		contadormov++;
		rmas();
		rmas();
		pintaractual();
	} 
	if((orden[0]=='b') && (orden[1]=='2'))
	{ 
        printf("Movimiento %d %c%c \n",contadormov, orden[0],orden[1]);
		contadormov++;
		bmas();
		bmas();
		pintaractual();
	} 
	if((orden[0]=='u') && (orden[1] == '\''))
		{ 
			printf("Movimiento %d %c%c \n",contadormov, orden[0],orden[1]);
			contadormov++;
			umenos();
			pintaractual();
		} 
		if((orden[0]=='f') && (orden[1] == '\''))
		{ 
			printf("Movimiento %d %c%c \n",contadormov, orden[0],orden[1]);
			contadormov++;
			fmenos();
			pintaractual();
		} 
		if((orden[0]=='d') && (orden[1] == '\''))
		{ 
			printf("Movimiento %d %c%c \n",contadormov, orden[0],orden[1]);
			contadormov++;
			dmenos();
			pintaractual();
		} 
		if((orden[0]=='l') && (orden[1] == '\''))
		{ 
			printf("Movimiento %d %c%c \n",contadormov, orden[0],orden[1]);
			contadormov++;
			lmenos();
			pintaractual();
		} 
		if((orden[0]=='r') && (orden[1] == '\''))
		{ 
			printf("Movimiento %d %c%c \n",contadormov, orden[0],orden[1]);
			contadormov++;
			rmenos();
			pintaractual();
		} 
		if((orden[0]=='b') && (orden[1] == '\''))
		{ 
			printf("Movimiento %d %c%c \n",contadormov, orden[0],orden[1]);
			contadormov++;
			bmenos();
			pintaractual();
		} 

}

if ((orden[0] != '%') && (orden[1] == '%'))// un mov simple
{
	if(orden[0] == 'u')
	{ 
        printf("Movimiento %d %c \n",contadormov, orden[0]);
		contadormov++;
		umas();
		pintaractual();
	} 
	if(orden[0] == 'f')
	{ 
        printf("Movimiento %d %c \n",contadormov, orden[0]);
		contadormov++;
		fmas();
		pintaractual();
	} 
	if(orden[0] == 'd')
	{ 
        printf("Movimiento %d %c \n",contadormov, orden[0]);
		contadormov++;
		dmas();
		pintaractual();
	} 
	if(orden[0] == 'l')
	{ 
        printf("Movimiento %d %c \n",contadormov, orden[0]);
		contadormov++;
		lmas();
		pintaractual();
	} 
	if(orden[0] == 'r')
	{ 
        printf("Movimiento %d %c \n",contadormov, orden[0]);
		contadormov++;
		rmas();
		pintaractual();
	} 
	if(orden[0] == 'b')
	{ 
        printf("Movimiento %d %c \n",contadormov, orden[0]);
		contadormov++;
		bmas();
		pintaractual();
	} 
}

contador ++;
}


}