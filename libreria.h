#ifndef LIBRERIA_H
# define LIBRERIA_H

# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <string.h>
# include <ctype.h>

extern char g_B1[];
extern char g_B2[];
extern char g_B3[];
extern char g_B4[];
extern char g_B5[];
extern char g_B6[];
extern char g_B7[];
extern char g_B8[];
extern char g_B9[];

extern char g_R1[];
extern char g_R2[];
extern char g_R3[];
extern char g_R4[];
extern char g_R5[];
extern char g_R6[];
extern char g_R7[];
extern char g_R8[];
extern char g_R9[];

extern char g_A1[];
extern char g_A2[];
extern char g_A3[];
extern char g_A4[];
extern char g_A5[];
extern char g_A6[];
extern char g_A7[];
extern char g_A8[];
extern char g_A9[];

extern char g_N1[];
extern char g_N2[];
extern char g_N3[];
extern char g_N4[];
extern char g_N5[];
extern char g_N6[];
extern char g_N7[];
extern char g_N8[];
extern char g_N9[];

extern char g_V1[];
extern char g_V2[];
extern char g_V3[];
extern char g_V4[];
extern char g_V5[];
extern char g_V6[];
extern char g_V7[];
extern char g_V8[];
extern char g_V9[];

extern char g_Y1[];
extern char g_Y2[];
extern char g_Y3[];
extern char g_Y4[];
extern char g_Y5[];
extern char g_Y6[];
extern char g_Y7[];
extern char g_Y8[];
extern char g_Y9[];

extern char *actual[];


void pintarsuperior(char *PosB1,char *PosB2,char *PosB3,char *PosB4,char *PosB5,char *PosB6,char *PosB7,char *PosB8,char *PosB9);

void pintarbanda1(char *PosR1,char *PosR2,char *PosR3,char *PosA1,char *PosA2,char *PosA3,char *PosN1,char *PosN2,char *PosN3,char *PosV1,char *PosV2,char *PosV3);

void pintarbanda2(char *PosR4,char *PosR5,char *PosR6,char *PosA4,char *PosA5,char *PosA6,char *PosN4,char *PosN5,char *PosN6,char *PosV4,char *PosV5,char *PosV6);

void pintarbanda3(char *PosR7,char *PosR8,char *PosR9,char *PosA7,char *PosA8,char *PosA9,char *PosN7,char *PosN8,char *PosN9,char *PosV7,char *PosV8,char *PosV9);

void pintarinferior(char *PosY1,char *PosY2,char *PosY3,char *PosY4,char *PosY5,char *PosY6,char *PosY7,char *PosY8,char *PosY9);

void movimientos();
void pintaractual();
void umas();
void umenos();
void fmas();
void fmenos();
void dmas();
void dmenos();
void rmas();
void rmenos();
void bmas();
void bmenos();
void lmas();
void lmenos();
void ejecutaralgoritmos();


#endif
