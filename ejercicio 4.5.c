#include <stdio.h>

int main ()

{

int n1, n2, n3;

printf ("Ingrese 3 numeros reales: ");
scanf ("%d%d%d", &n1, &n2, &n3);

if (n1 > n2 && n2 > n3)
{
    printf ("El orden es: %d %d %d", n3, n2, n1);
}
    else if (n1 > n3 && n3 > n2)
{
        printf ("El orden es: %d %d %d", n2, n3, n1);
}
    else if (n3 > n1 && n1 > n2)
{
        printf ("El orden es: %d %d %d", n2, n1, n3);
}
    else if (n3 > n2 && n2 > n1)
{
        printf ("El orden es: %d %d %d", n1, n2, n3);
}
    else if (n2 > n1 && n1 > n3)
{
        printf ("El orden es: %d %d %d", n3, n1, n2);
}
    else if (n2 > n3 && n3 > n1)
        printf ("El orden es: %d %d %d", n1, n3, n2);

return 0;

}

