/* se ingresan 10 números en un array , validar entre 0 y 20  ingresados por el ususario en forma secuencial,
mostrar:
el maximo y su indice
el minimo y su indice
y luego  solo mostrar los elementos con sus indices que superen el numero 10
mostrar el listado de numeros completo
Caraballo Iván
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeros[10];
    int i;
    int mayor;
    int menor;

    mayor=0;
    menor=20;

    for(i=0; i<10; i++)
    {
        printf("Ingrese un numero entre 0 y 20: ");
        scanf("%d", &numeros[i]);
        if(numeros[i]<0 || numeros[i]>20)
        {
            printf("Error, reingrese un numero entre 0 y 20: ");
            scanf("%d", &numeros[i]);
        }
    }

    for(i=0; i<10 ; i++)
    {
        if(numeros[i]>mayor)
        {
            mayor = numeros[i];
        }
        else
        {
            if(numeros[i]<menor)
            {
                menor = numeros[i];
            }
        }
    }

    for(i=0; i<10; i++)
    {
        printf("%d\n", numeros[i]);
    }

    printf("El numero mayos es: %d\n", mayor);
    printf("El numero menor es: %d\n", menor);

    return 0;
}
