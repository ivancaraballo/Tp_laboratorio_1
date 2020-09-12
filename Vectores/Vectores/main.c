#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeros[10];
    int i;

    for(i=0; i<10; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d", &numeros[i]);
    }

    for(i=0; i<10; i++)
    {
        printf("%d\n", numeros[i]);
    }

    return 0;
}
