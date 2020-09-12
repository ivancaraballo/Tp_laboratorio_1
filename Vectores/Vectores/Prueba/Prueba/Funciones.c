#include "prog.h"

int CalcularFactorial(float);
float Divission(float,float);
float SumarTotales(float,float);
float RestarTotales(float,float);
float MultiplicarTotales(float,float);



int CalcularFactorial(float numero)
{
    float resultado;

    if(numero == 0)
    {
        resultado = 1;
    }
    else
    {
         resultado = numero * CalcularFactorial(numero - 1);
    }

    return resultado;
}

float Divission(float numero,float divisor)
{
    float resultado;
    resultado=(float)numero/divisor;

    return resultado;
}

float SumarTotales(float numero, float acum)
{
    int suma;
    suma=numero+acum;
    return suma;
}

float RestarTotales(float numero, float acum)
{
    int resta;
    resta=numero-acum;
    return resta;
}

float MultiplicarTotales(float numero, float acum)
{
    long long int multiplicaNumero;
    multiplicaNumero=numero*acum;
    return multiplicaNumero;
}
