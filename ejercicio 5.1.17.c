#include <stdio.h>

int main()
{
    int i, codigo, valor,max_codigo = 0,min_codigo, mayor = 0, menor = 0;

    for (i = 1; i <= 5; i++)
    {
        printf ("Ingrese el codigo del articulo %d : ", i);
        scanf ("%d", &codigo);
        printf ("Ingrese el valor de este articulo: ");
        scanf ("%d", &valor);

    if (valor > mayor)
    {
        mayor = valor;
        max_codigo =  codigo;
    }
    else
    {
        menor = valor;
        min_codigo = codigo;
    }
    }

    printf("El articulo mas caro es: $%d con el codigo: %d\nEl articulo mas barato es: $%d con el codigo: %d\n", mayor, max_codigo, menor, min_codigo);

    return 0;
}
