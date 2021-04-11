#include "libreria.h"

void lmas()//izquierda reloj
{

actual[0]=actual[11];
actual[11]=actual[22];
actual[22]=actual[35];
actual[35]=actual[24];
actual[24]=actual[0];

actual[0]=actual[10];
actual[10]=actual[34];
actual[34]=actual[36];
actual[36]=actual[12];
actual[12]=actual[0];

actual[0]=actual[1];
actual[1]=actual[45];
actual[45]=actual[46];
actual[46]=actual[13];
actual[13]=actual[0];

actual[0]=actual[4];
actual[4]=actual[33];
actual[33]=actual[49];
actual[49]=actual[25];
actual[25]=actual[0];

actual[0]=actual[7];
actual[7]=actual[21];
actual[21]=actual[52];
actual[52]=actual[37];
actual[37]=actual[0];



}
void lmenos()//izquierda contrareloj
{
    lmas();
    lmas();
    lmas();
}
    void rmas()//derecha reloj
{
actual[0]=actual[17];
actual[17]=actual[28];
actual[28]=actual[41];
actual[41]=actual[30];
actual[30]=actual[0];

actual[0]=actual[16];
actual[16]=actual[40];
actual[40]=actual[42];
actual[42]=actual[18];
actual[18]=actual[0];

actual[0]=actual[3];
actual[3]=actual[15];
actual[15]=actual[48];
actual[48]=actual[43];
actual[43]=actual[0];

actual[0]=actual[6];
actual[6]=actual[27];
actual[27]=actual[51];
actual[51]=actual[31];
actual[31]=actual[0];

actual[0]=actual[9];
actual[9]=actual[39];
actual[39]=actual[54];
actual[54]=actual[19];
actual[19]=actual[0];


}
    void rmenos()//derecha contrareloj
{
    rmas();
    rmas();
    rmas();
}

void bmas()//detras reloj
{

actual[0]=actual[20];
actual[20]=actual[31];
actual[31]=actual[44];
actual[44]=actual[33];
actual[33]=actual[0];

actual[0]=actual[19];
actual[19]=actual[43];
actual[43]=actual[45];
actual[45]=actual[21];
actual[21]=actual[0];

actual[0]=actual[3];
actual[3]=actual[42];
actual[42]=actual[52];
actual[52]=actual[10];
actual[10]=actual[0];

actual[0]=actual[2];
actual[2]=actual[30];
actual[30]=actual[53];
actual[53]=actual[22];
actual[22]=actual[0];

actual[0]=actual[1];
actual[1]=actual[18];
actual[18]=actual[54];
actual[54]=actual[34];
actual[34]=actual[0];



}
void bmenos()//detras contrareloj
{
    bmas();
    bmas();
    bmas();
}