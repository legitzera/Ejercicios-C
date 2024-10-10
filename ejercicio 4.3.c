#include <stdio.h>

int main ()

{

float n1, n2, n3;

printf ("Ingrese 3 numeros reales: ");
scanf ("%f%f%f", &n1, &n2, &n3);

if (n1 > n3 && n2 > n3)
{
    printf ("MAYORES AL TERCERO");
}

    else if (n1 == n2 && n1 == n3)
{
        printf ("TRES IGUALES");
}
    else
{
        printf ("ALGUNO ES MENOR");
}

return 0;

}

