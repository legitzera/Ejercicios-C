#include <stdio.h>

int main ()
{
    int codigo;
    float precio_original, precio_final;

    printf ("Ingrese el precio original:");
    scanf ("%f", &precio_original);

    printf ("Ingrese el codigo (1 o 0):");
    scanf ("%d", &codigo);

    precio_final = precio_original * (1- codigo*0.20);

    printf ("El precio final de su articulo es: %.2f\n", precio_final);

    return 0;



}
