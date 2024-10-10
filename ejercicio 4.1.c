#include <stdio.h>

int main ()
{
    int n1,n2,n3;

    printf ("Ingrese 3 numeros enteros distintos:");
    scanf ("%d%d%d", &n1, &n2, &n3);

    if (n1>n2 && n1>n3)
    {
        printf ("el numero mas grande es: %d", n1);
    }
    else if (n2>n1 && n2>n3)
    {
        printf ("el numero mas grande es: %d", n2);
    }
    else
    {
        printf ("el numero mas grande es: %d", n3);
    }

    return 0;




}
