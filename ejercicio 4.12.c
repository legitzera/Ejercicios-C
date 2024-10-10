#include <stdio.h>

int main ()

{

int catalogo_min, catalogo_max, articulo;

printf ("Ingrese el numero de articulo: ");
scanf ("%d", &articulo);

catalogo_min = 1200;
catalogo_max = 90000;

if (articulo < catalogo_min || articulo > catalogo_max)
{
        printf("FUERA DE CATALOGO\n");
}
else if ((articulo >= 12121 && articulo <= 18081) || (articulo >= 30012 && articulo <= 45565) || (articulo >= 67000 && articulo <= 68000))
{
        printf("El articulo es defectuoso\n");
}

else
{
    printf ("El articulo NO es defectuoso");
}

return 0;

}

