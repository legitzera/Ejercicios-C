#include <stdio.h>

int main ()

{

int a, b, operacion;

printf ("Ingrese la primer temperatura regristrada: ");
scanf ("%d", &a);

printf ("Ingrese la segunda temperatura regristrada: ");
scanf ("%d", &b);

printf ("Ingrese el codigo de operacion: ");
scanf ("%d", &operacion);


switch (operacion)
{
case 1: printf ("La temperatura es: %d grados", a + b);
        break;

case 4:

case 8:

case 2: printf ("La temperatura es: %d grados", a - b);
        break;

case 3:

case 5: printf ("La temperatura es: %d grados", a * b);
        break;

case 6: printf ("La temperatura es: %d grados", a % b);
        break;

case 7: if (b == 0)
            printf ("No se puede dividir por 0");
        else
            printf ("La temperatura es: %d grados", a / b);
        break;

default:
    printf ("Error. Codigo de operacion incorrecto.");
}

return 0;

}

