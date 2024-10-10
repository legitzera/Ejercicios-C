#include <stdio.h>

int main ()

{

int cantidad;
float precio;

printf ("Ingrese la cantidad de DVDs que quiere comprar : ");
scanf ("%d", &cantidad);

if (cantidad < 1 || cantidad > 500)
{
        printf("Cantidad fuera de rango. Solo se permiten compras entre 1 y 500 DVDs.\n");
}
else if (cantidad > 0 && cantidad <10)
{
    precio = cantidad * 15;
}
else if (cantidad >= 10 && cantidad < 49)
{
    precio = (cantidad/10) * 120 + (cantidad % 10) * 15;
}
else if (cantidad >= 50 && cantidad <= 99)
{
    precio = (cantidad / 50) * 500 + ((cantidad % 50) / 10) * 120 + (cantidad % 10) * 15;
}
else if (cantidad >= 100 && cantidad <= 500)
{
    precio = ((cantidad / 50) * 500 + ((cantidad % 50) / 10) * 120 + (cantidad % 10) * 15) * 0.9;
}

printf("El total a pagar por %d DVDs es: $%.2f\n", cantidad, precio);

return 0;

}

