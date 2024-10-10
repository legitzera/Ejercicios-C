#include <stdio.h>

int main()
{
    int i, N, suma = 0;


    printf("Ingrese un numero natural N: ");
    scanf("%d", &N);


    if (N < 1)
    {
        printf("Por favor, ingrese un numero natural (mayor o igual a 1).\n");
        return 1;
    }


    for (i = 1; i <= N; i++)
    {
        suma += i;
    }


    printf("La suma de los primeros %d numeros naturales es: %d\n", N, suma);

    return 0;
}
