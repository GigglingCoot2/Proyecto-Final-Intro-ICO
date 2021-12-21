#include <iostream>
#include <stdio.h>
#include "FResta.h"

//Prototipo
float restar(float x, float y);

//Programa
int main()
{
    float x=0, y=0;
    scanf_s("%f %f", &x, &y);
    float resultado = restar(x,y);

    printf_s("%.2f\n", resultado);

    return 0;

}
//Funcion
float restar(float x, float y)
{
    float resultado=0;
    resultado= x - y ;
    return resultado;
}
