#include <stdio.h>

int main()
{
    int i, numero, mayor;

    printf("Ingrese un numero entero: ");
    scanf("%d", &mayor);

    for (i = 2; i <= 10; i++)
    {
        printf("Ingrese el numero %d: ", i);
        scanf("%d", &numero);
        if (numero > mayor)
        {
            mayor = numero;
        }
    }

    printf("El mayor numero ingresado es: %d\n", mayor);
    return 0;
}
