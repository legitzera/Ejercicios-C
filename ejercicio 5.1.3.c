#include <stdio.h>

int main ()
{
    int i, numero, suma_pares = 0, conteo_pares = 0;
    float promedio;

    for (i = 0; i < 50; i++)
    {
        printf ("Ingrese un numero entero: ");
        scanf ("%d", &numero);

        if (numero % 2 == 0)
    {
            suma_pares += numero;
            conteo_pares ++;
    }
    }

    if (conteo_pares > 0)
    {
      promedio = (float)suma_pares / conteo_pares;
      printf ("El promedio es: %.2f\n", promedio);
    }
    else
    {
        printf ("No se ingresaron numeros pares.");
    }

return 0;
}
