#include <stdio.h>

int main ()

{

float importe, descuento1, descuento2, descuento3, importe_neto;

printf ("Ingrese el importe: $");
scanf ("%f", &importe);

descuento1 = importe * 0.045;
descuento2 = importe * 0.08;
descuento3 = importe * 0.105;

if (importe < 55)
{
        importe_neto = importe - descuento1;
        printf("Su descuento es de: $%.2f , su valor a pagar es: $%.2f", descuento1, importe_neto);
}
else if (importe >= 55 && importe <= 100)
{
        importe_neto = importe - descuento2;
        printf("Su descuento es de: $%.2f , su valor a pagar es: $%.2f", descuento2, importe_neto);
}
else
{
        importe_neto = importe - descuento3;
        printf("Su descuento es de: $%.2f , su valor a pagar es: $%.2f", descuento3, importe_neto);
}

return 0;

}

