
#include "funciones.h"


float CalcularFactorial(float numero)
{
    float factorial;
    if(numero == 0)
    {
        factorial = 1;
    }
    else
    {
        factorial = numero * CalcularFactorial(numero - 1);
    }
    return factorial;
}

float Division(float primerNumero,float segundoNumero)
{
    float dividir;
    dividir=primerNumero/segundoNumero;
    return dividir;
}

float SumarTotales(float primerNumero, float segundoNumero)
{
    float suma;
    suma=primerNumero+segundoNumero;
    return suma;
}

float RestarTotales(float primerNumero, float segundoNumero)
{
    float resta;
    resta=primerNumero-segundoNumero;
    return resta;
}

float MultiplicarTotales(float primerNumero, float acum)
{
    long long int multiplicar;
    multiplicar=primerNumero*acum;
    return multiplicar;
}
