#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"



int main()
{
    char numeroIngresado[1];

    float numeroA;
    float numeroB;
    float resDivision;
    float resSuma;
    float resResta;
    float resMultiplicacion;
    int resFactorial1;
    int resFactorial2;

    int opcionA;
    do
    {
        opcionA=MostrarMenu(opcionA);
        switch(opcionA)
        {
            case 1:
                numeroA=CargarNumeros(numeroA);
                break;
            case 2:
                numeroB=CargarNumeros(numeroB);
                break;
            case 3:
                resDivision=Division(numeroA,numeroB);
                resSuma=SumarTotales(numeroA,numeroB);
                resResta=RestarTotales(numeroA,numeroB);
                resMultiplicacion=MultiplicarTotales(numeroA,numeroB);
                resFactorial1=CalcularFactorial(numeroA);
                resFactorial2=CalcularFactorial(numeroB);
                break;
            case 4:
                printf ("El resultado de A+B es:: %.2f\n",resSuma);
                printf ("El resultado de A-B es:  %.2f\n",resResta);
                printf ("El resultado de la DIVISION es: %.2f\n",resMultiplicacion);
                if(resDivision==0)
                {
                    printf("No es posible dividir por cero");
                }
                else
                {
                    printf ("El resultado de A/B es:: %.2f\n",resDivision);
                }
                printf ("El resultado de la CALCULO FACTORIAL DEL PRIMER NUMERO es: %d\n",resFactorial1);
                printf ("El resultado de la CALCULO FACTORIAL DEL SEGUNDO NUMERO es: %d\n",resFactorial2);
                break;
        }
    }while(opcionA!=5);




    return 0;

}
