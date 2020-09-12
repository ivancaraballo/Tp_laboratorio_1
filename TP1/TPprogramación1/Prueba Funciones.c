
#include "funciones.h"


int MostrarMenu(int opcionA)
{
    int opciona;

    printf("1. Ingresar 1er operando (A=x) \n");
    printf("2. Ingresar 2do operando (B=y) \n");
    printf("3- Calcular todas las operaciones \n");
    printf("4- Informar resultados \n");
    printf("5- Salir \n");
    fflush(stdin);
    scanf("%d", &opciona);
    while(opciona!=1&&opciona!=2&&opciona!=3&&opciona!=4&&opciona!=5)
    {
        printf("1. Ingresar 1er operando (A=x) \n");
        printf("2. Ingresar 2do operando (B=y) \n");
        printf("3- Calcular todas las operaciones \n");
        printf("4- Informar resultados \n");
        printf("5- Salir \n");
        fflush(stdin);
        scanf("%d", &opciona);
    }

    return opciona;
}

float CargarNumeros(float numeros)
{
    int i;
    int tam=1;
    for(i=0; i<tam; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%f", &numeros);
    }
}

int CalcularFactorial(float numero)
{
    int resultado;

    if(numero == 0)
    {
        resultado = 1;
    }
    else
    {
        resultado =(int) numero * CalcularFactorial(numero - 1);
    }

    return resultado;
}

float Division(float numero,float divisor)
{
    float resultado;
    if(numero==0||divisor==0)
    {
        printf("Ingreso un 0, por favor verifique de nuevo su valor");

    }
    else
    {
        resultado=numero/divisor;
    }


    return resultado;
}

float SumarTotales(float numero, float acum)
{
    float suma;
    suma=numero+acum;
    return suma;
}

float RestarTotales(float numero, float acum)
{
    float resta;
    resta=numero-acum;
    return resta;
}

float MultiplicarTotales(float numero, float acum)
{
    long long int multiplicaNumero;
    multiplicaNumero=numero*acum;
    return multiplicaNumero;
}
