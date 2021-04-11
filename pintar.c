#include "libreria.h"



void pintarsuperior(char *PosB1,char *PosB2,char *PosB3,char *PosB4,char *PosB5,char *PosB6,char *PosB7,char *PosB8,char *PosB9)
{

printf("\n");

printf("Para salir escribir 00 y Enter\nLos movimientos estan basados en la notación Singmaster (u,f,d,r,b,l,u',f',d',r',b',l')\nPara introducir un algoritmo escribir al y Enter(por ejemplo un scramble)\n\n");

printf("          ");    
printf("%s",PosB1);
printf(" "); 
printf("%s",PosB2); 
printf(" "); 
printf("%s\n\n",PosB3);
printf("          ");    

printf("%s",PosB4); 
printf(" "); 
printf("%s",PosB5);
printf(" "); 
printf("%s\n\n",PosB6);
printf("          ");    

printf("%s",PosB7);
printf(" "); 
printf("%s",PosB8);
printf(" "); 
printf("%s\n\n",PosB9);
}
void pintarbanda1(char *PosR1,char *PosR2,char *PosR3,char *PosA1,char *PosA2,char *PosA3,char *PosN1,char *PosN2,char *PosN3,char *PosV1,char *PosV2,char *PosV3)
{
    //Primera fila
printf("%s",PosR1);
printf(" "); 
printf("%s",PosR2);
printf(" "); 
printf("%s",PosR3);
printf("  ");
printf("%s",PosA1);
printf(" "); 
printf("%s",PosA2);
printf(" "); 
printf("%s",PosA3);
printf("  ");
printf("%s",PosN1);
printf(" "); 
printf("%s",PosN2);
printf(" "); 
printf("%s",PosN3);
printf("  ");
printf("%s",PosV1);
printf(" "); 
printf("%s",PosV2);
printf(" "); 
printf("%s\n\n",PosV3);

}
void pintarbanda2(char *PosR4,char *PosR5,char *PosR6,char *PosA4,char *PosA5,char *PosA6,char *PosN4,char *PosN5,char *PosN6,char *PosV4,char *PosV5,char *PosV6)
{
    //Segunda fila
printf("%s",PosR4);
printf(" "); 
printf("%s",PosR5);
printf(" "); 
printf("%s",PosR6);
printf("  ");
printf("%s",PosA4);
printf(" "); 
printf("%s",PosA5);
printf(" "); 
printf("%s",PosA6);
printf("  ");
printf("%s",PosN4);
printf(" "); 
printf("%s",PosN5);
printf(" "); 
printf("%s",PosN6);
printf("  ");
printf("%s",PosV4);
printf(" "); 
printf("%s",PosV5);
printf(" "); 
printf("%s\n\n",PosV6);

}
void pintarbanda3(char *PosR7,char *PosR8,char *PosR9,char *PosA7,char *PosA8,char *PosA9,char *PosN7,char *PosN8,char *PosN9,char *PosV7,char *PosV8,char *PosV9)
{
    //Tercera fila
printf("%s",PosR7);
printf(" "); 
printf("%s",PosR8);
printf(" "); 
printf("%s",PosR9);
printf("  ");
printf("%s",PosA7);
printf(" "); 
printf("%s",PosA8);
printf(" "); 
printf("%s",PosA9);
printf("  ");
printf("%s",PosN7);
printf(" "); 
printf("%s",PosN8);
printf(" "); 
printf("%s",PosN9);
printf("  ");
printf("%s",PosV7);
printf(" "); 
printf("%s",PosV8);
printf(" "); 
printf("%s\n\n",PosV9);

}
void pintarinferior(char *PosY1,char *PosY2,char *PosY3,char *PosY4,char *PosY5,char *PosY6,char *PosY7,char *PosY8,char *PosY9)
{

printf("          ");    
printf("%s",PosY1);
printf(" "); 
printf("%s",PosY2);
printf(" "); 
printf("%s\n\n",PosY3); 
printf("          ");    

printf("%s",PosY4);
printf(" "); 
printf("%s",PosY5);
printf(" "); 
printf("%s\n\n",PosY6); 
printf("          ");    

printf("%s",PosY7);
printf(" "); 
printf("%s",PosY8);
printf(" "); 
printf("%s\n\n",PosY9); 
}