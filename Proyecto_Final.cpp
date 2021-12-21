#include <iostream>
#include <stdio.h>
#include "FResta.h"
#include "Suma.h"

int main()
{
    printf("\t\t ==Proyecto Final de Introduccion a ICO==\n");
    //Funcion Resta
    float x=0, y=0;
    scanf_s("%f %f", &x, &y);
    float resultado = restar(x,y);

    printf_s("%.2f\n", resultado);

    return 0;
    //compañeras favor de crear sus librerias en este archivo uwu
}
