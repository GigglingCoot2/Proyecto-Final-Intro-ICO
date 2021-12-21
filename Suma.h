#pragma once
#include <stdio.h>

int main()
{
	int num1;
	int num2;
	int resultado;
	printf("ingrese el primer valor\n");
	scanf_s("%d", &num1);
	printf("ingrese el segundo valor \n");
	scanf_s("%d", &num2);
	resultado = num1 + num2;
	printf("el resultado de la suma es:%d\n", resultado);
	return 0;
}