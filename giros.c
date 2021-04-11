#include "libreria.h"

void umas()//arriba reloj
{

actual[0]=actual[1];
actual[1]=actual[7];
actual[7]=actual[9];
actual[9]=actual[3];
actual[3]=actual[0];

actual[0]=actual[2];
actual[2]=actual[4];
actual[4]=actual[8];
actual[8]=actual[6];
actual[6]=actual[0];

actual[0]=actual[10];
actual[10]=actual[13];
actual[13]=actual[16];
actual[16]=actual[19];
actual[19]=actual[0];

actual[0]=actual[11];
actual[11]=actual[14];
actual[14]=actual[17];
actual[17]=actual[20];
actual[20]=actual[0];

actual[0]=actual[12];
actual[12]=actual[15];
actual[15]=actual[18];
actual[18]=actual[21];
actual[21]=actual[0];



}
void umenos()//arriba contrareloj
{
    umas();
    umas();
    umas();
}
    void fmas()//delante reloj
{
actual[0]=actual[13];
actual[13]=actual[37];
actual[37]=actual[39];
actual[39]=actual[15];
actual[15]=actual[0];

actual[0]=actual[14];
actual[14]=actual[25];
actual[25]=actual[38];
actual[38]=actual[27];
actual[27]=actual[0];

actual[0]=actual[12];
actual[12]=actual[46];
actual[46]=actual[40];
actual[40]=actual[9];
actual[9]=actual[0];

actual[0]=actual[24];
actual[24]=actual[47];
actual[47]=actual[28];
actual[28]=actual[8];
actual[8]=actual[0];

actual[0]=actual[36];
actual[36]=actual[48];
actual[48]=actual[16];
actual[16]=actual[7];
actual[7]=actual[0];


}
    void fmenos()//delante contrareloj
{
    fmas();
    fmas();
    fmas();
}

void dmas()//abajo reloj
{

actual[0]=actual[46];
actual[46]=actual[52];
actual[52]=actual[54];
actual[54]=actual[48];
actual[48]=actual[0];

actual[0]=actual[47];
actual[47]=actual[49];
actual[49]=actual[53];
actual[53]=actual[51];
actual[51]=actual[0];

actual[0]=actual[34];
actual[34]=actual[43];
actual[43]=actual[40];
actual[40]=actual[37];
actual[37]=actual[0];

actual[0]=actual[35];
actual[35]=actual[44];
actual[44]=actual[41];
actual[41]=actual[38];
actual[38]=actual[0];

actual[0]=actual[36];
actual[36]=actual[45];
actual[45]=actual[42];
actual[42]=actual[39];
actual[39]=actual[0];



}
void dmenos()//abajo contrareloj
{
    dmas();
    dmas();
    dmas();
}