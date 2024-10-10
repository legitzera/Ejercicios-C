#include <stdio.h>

int main ()

{

int n1, n2, n3;

printf ("Ingrese 3 numeros enteros: ");
scanf ("%d%d%d", &n1, &n2, &n3);

if (n1 == n2 + n3 || n2 == n1 + n3 || n3 == n1 + n2 )
{
    printf ("Uno de los numeros es la suma de los otros dos");
}

    else
{
        printf ("NINGUN numero es la suma de los otros dos");
}

return 0;

}

