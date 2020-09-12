#include <stdio.h>
#include <stdlib.h>

int SumarNumeros(int, int);
int RestarNumeros(int, int);
int MultiplicarNumeros(int, int);
float DividirNumeros(int, int);

int main()
{
    int numeroUno;
    int numeroDos;
    int suma;
    int resta;
    int multiplicacion;
    int opcion;
    float division;

    printf("1. Ingresar 1er operando (A=x)\n");
    printf("2. Ingresar 2do operando (B=y)\n");
    printf("3. Calcular todas las operaciones\n");
    printf(" a) Calcular la suma (A+B)\n");
    printf(" b) Calcular la resta (A-B)\n");
    printf(" c) Calcular la division (A/B)\n");
    printf(" d) Calcular la multiplicacion (A*B)\n");
    printf(" e) Calcular el factorial (A!)\n");
    printf("4. Informar resultados\n");
    printf(" a) El resultado de A+B es: r\n");
    printf(" b) El resultado de A-B es: r\n");
    printf(" c) El resultado de A/B es: r\n");
    printf(" d) El resultado de A*B es: r\n");
    printf(" e) El factorial de A es: r1 y El factorial de B es: r2\n");
    printf("5. Salir\n");

    printf("Seleccione una opcion");
    scanf("%d", &opcion);

    if(opcion = 1)
    {
        printf("Ingrese un numero");
        scanf("%d", &numeroUno);
    }
    else
    {
        printf("Error, debe ingresar un operador");
    }

    printf("Ingrese un numero");
    scanf("%d", &numeroUno);

    printf("Ingrese otro numero");
    scanf("%d", &numeroDos);

    switch(opcion)
    {
        printf("Seleccione una opcion ");
        scanf("%d", &opcion);
        case 1:
            {
                suma = SumarNumeros(numeroUno, numeroDos);
                printf("La suma de los dos numeros es: %d\n", suma);
                break;
            }
        case 2:
            {
                resta = RestarNumeros(numeroUno, numeroDos);
                printf("La resta de los dos numeros es: %d\n", resta);
                break;
            }
        case 3:
            {
                multiplicacion = MultiplicarNumeros(numeroUno, numeroDos);
                printf("La multiplicacion de los dos numeros es: %d\n", multiplicacion);
                break;
            }
        case 4:
            {
                division = DividirNumeros(numeroUno, numeroDos);
                printf("La division de los dos numeros es: %.2f\n", division);
                break;
            }
    }
    suma = SumarNumeros(numeroUno, numeroDos);
    printf("La suma de los dos numeros es: %d\n", suma);

    resta = RestarNumeros(numeroUno, numeroDos);
    printf("La resta de los dos numeros es: %d\n", resta);

    multiplicacion = MultiplicarNumeros(numeroUno, numeroDos);
    printf("La multiplicacion de los dos numeros es: %d\n", multiplicacion);

    division = DividirNumeros(numeroUno, numeroDos);
    printf("La division de los dos numeros es: %.2f\n", division);

    return 0;
}

int SumarNumeros(int numeroUno, int numeroDos)
{
    int suma;
    suma = numeroUno + numeroDos;
    return suma;
}
int RestarNumeros(int numeroUno,int numeroDos)
{
    int resta;
    resta = numeroUno - numeroDos;
    return resta;
}
int MultiplicarNumeros(int numeroUno,int numeroDos)
{
    int multiplicacion;
    multiplicacion = numeroUno * numeroDos;
    return multiplicacion;
}
float DividirNumeros(int numeroUno,int numeroDos)
{
    float division;
    division = (float)numeroUno / numeroDos;
    return division;
}
