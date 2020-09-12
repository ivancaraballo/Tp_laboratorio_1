#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"



int main()
{
    float numeroPrimero;
    float numeroSegundo;
    float resDivision;
    float resSuma;
    float resResta;
    float resMultiplicacion;
    int menuOpciones;
    int resFactorial1;
    int resFactorial2;
    int cargarPrimero;
    int cargarSegundo;
    int cargarTercero;

    cargarPrimero = 1;
    cargarSegundo = 1;
    cargarTercero = 1;

    numeroPrimero = 0;
    numeroSegundo = 0;

    do
    {
        printf("\n1. Ingresar 1er operando (A=%.2f) \n",numeroPrimero);
        printf("2. Ingresar 2do operando (B=%.2f) \n",numeroSegundo);
        printf("3- Calcular todas las operaciones \n");
        printf("4- Informar resultados \n");
        printf("5- Salir \n");
        printf("Ingrese una opcion: ");
        scanf("%d", &menuOpciones);

        switch(menuOpciones)
        {
            case 1:
                printf("Ingrese un numero: ");
                scanf("%f", &numeroPrimero);
                cargarPrimero=2;
                cargarTercero=1;
                break;
            case 2:
                printf("Ingrese un numero: ");
                scanf("%f", &numeroSegundo);
                cargarSegundo=2;
                cargarTercero=1;
                break;
            case 3:
                if(cargarPrimero==1 || cargarSegundo==1)
                {
                    printf("\nPrimero debe cargar el punto 1 y 2\n\n");
                }
                else
                {
                    if(numeroSegundo!=0)
                    {
                        resDivision=Division(numeroPrimero,numeroSegundo);
                    }
                    resSuma=SumarTotales(numeroPrimero,numeroSegundo);
                    resResta=RestarTotales(numeroPrimero,numeroSegundo);
                    resMultiplicacion=MultiplicarTotales(numeroPrimero,numeroSegundo);
                    resFactorial1=CalcularFactorial(numeroPrimero);
                    resFactorial2=CalcularFactorial(numeroSegundo);
                    printf("\nSe realizaron los calculos de las operaciones\n\n");
                    cargarTercero=2;
                }
                break;
            case 4:
                if(cargarTercero==1)
                {
                    printf("\nPrimero debe seleccionar la opcion 3\n\n");
                }
                else
                {
                    printf ("El resultado de A+B es:: %.2f\n",resSuma);
                    printf ("El resultado de A-B es:  %.2f\n",resResta);
                    printf ("El resultado de A*B es: %.2f\n",resMultiplicacion);
                    if(numeroSegundo==0)
                    {
                        printf("No es posible dividir por cero\n");
                    }
                    else
                    {
                        printf ("El resultado de A/B es: %.2f\n",resDivision);
                    }
                    printf ("El factorial del primer numero es: %d\n",resFactorial1);
                    printf ("El factorial del segundo numero es: %d\n",resFactorial2);
                }
                break;
            case 5:
                {
                    printf("Gracias por usar nuestro programa");
                }
        }
    }while(menuOpciones!=5);




    return 0;

}
