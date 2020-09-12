#include <stdio.h>
#include <stdlib.h>
#include "prog.h"





int main()
{
    char numeroIngresado[1];
    int validoNumero;
    float numeroIngradoA;
    float numeroIngradoB;
    float resDivision;
    int resSuma;
    int resResta;
    int resMultiplicacion;
    int resFactorial;
    char respuesta;
    int opcionA;
    do
    {
        opcionA=MostrarMenu(opcionA);
        /* do
         {
             printf("1- Ingresar el primer numero a calcular \n");
             printf("2- Ingresar el segundo numero a calcular \n");
             printf("3- Calcular todas las operaciones \n");
             printf("4- Informar resultados \n");
             printf("5- Salir \n");
             fflush(stdin);
             scanf("%d", &opcionA);
             while(opcionA!=1&&opcionA!=2&&opcionA!=3&&opcionA!=4&&opcionA!=5)
             {
                 printf("1- Ingresar el primer numero a calcular \n");
                 printf("2- Ingresar el segundo numero a calcular \n");
                 printf("3- Calcular todas las operaciones \n");
                 printf("4- Informar resultados \n");
                 printf("5- Salir \n");
                 fflush(stdin);
                 scanf("%d", &opcionA);
             }*/

        switch(opcionA)
        {
        case 1:
            printf("\nIngrese un numero\n");
            scanf("%f",&numeroIngradoA);
            while(numeroIngradoA<0 ||numeroIngradoA>18)
            {
                printf("\nIngrese un numero\n");
                scanf("%f",&numeroIngradoA);
            }

            opcionA=MostrarMenu(opcionA);

            break;
        case 2:
            printf("\nIngrese un numero\n");
            scanf("%f",&numeroIngradoB);
            while(isdigit(numeroIngradoB))
            {
                printf("\nIngrese un numero\n");
                scanf("%f",&numeroIngradoB);
            }
            opcionA=MostrarMenu(opcionA);
            break;
        case 3:

            resDivision=Divission(numeroIngradoA,numeroIngradoB);
            resSuma=SumarTotales(numeroIngradoA,numeroIngradoB);
            resResta=RestarTotales(numeroIngradoA,numeroIngradoB);
            resMultiplicacion=MultiplicarTotales(numeroIngradoA,numeroIngradoB);
            resFactorial=CalcularFactorial(numeroIngradoA);
            numeroIngradoB=CalcularFactorial(numeroIngradoB);

            opcionA=MostrarMenu(opcionA);
            break;
        case 4:
            printf ("El resultado de A+B es:: %d\n",resSuma);
            printf ("El resultado de A-B es:  %d\n",resResta);
            printf ("El resultado de la DIVISION es: %d\n",resDivision);
            if(resDivision==0)
            {
                printf("No es posible dividir por cero");
            }
            else
            {
                printf ("El resultado de A/B es:: %d\n",resMultiplicacion);
            }
            printf ("El resultado de la CALCULO FACTORIAL DEL PRIMER NUMERO es: %d\n",resFactorial);
            printf ("El resultado de la CALCULO FACTORIAL DEL SEGUNDO NUMERO es: %d\n",resFactorial);
            opcionA=MostrarMenu(opcionA);
            break;
        case 5:


            break;

        }

    }
    while(respuesta!='5');



    return 0;

}
void MostrarMenu(int opcion)
{
    int opcionA;

    printf("1- Ingresar el primer numero a calcular \n");
    printf("2- Ingresar el segundo numero a calcular \n");
    printf("3- Calcular todas las operaciones \n");
    printf("4- Informar resultados \n");
    printf("5- Salir \n");
    fflush(stdin);
    scanf("%d", &opcionA);
    while(opcionA!=1&&opcionA!=2&&opcionA!=3&&opcionA!=4&&opcionA!=5)
    {
        printf("1- Ingresar el primer numero a calcular \n");
        printf("2- Ingresar el segundo numero a calcular \n");
        printf("3- Calcular todas las operaciones \n");
        printf("4- Informar resultados \n");
        printf("5- Salir \n");
        fflush(stdin);
        scanf("%d", &opcionA);
    }

    return opcionA;
}
