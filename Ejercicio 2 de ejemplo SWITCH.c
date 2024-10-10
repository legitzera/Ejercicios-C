#include <stdio.h>

int main ()

{

int importe, historia;
char codigo;

printf ("Ingrese su numero de historia: ");
scanf ("%d", &historia);

printf ("Ingrese su codigo: ");
fflush (stdin);
scanf ("%c", &codigo);

switch (codigo)
{
case 'A': printf ("Su numero de historia es: %d\n Su codigo es: %c\n Su importe es: $%d", historia, codigo, importe);
case 'a': printf ("Su numero de historia es: %d\n Su codigo es: %c\n Su importe es: $%d", historia, codigo, importe);
        break;

case 'D': printf ("Su numero de historia es: %d\n Su codigo es: %c\n Su importe es: $%d", historia, codigo, importe);
case 'd': printf ("Su numero de historia es: %d\n Su codigo es: %c\n Su importe es: $%d", historia, codigo, importe);
        break;

case 'F': printf ("Su numero de historia es: %d\n Su codigo es: %c\n Su importe es: $%d", historia, codigo, importe);
case 'f': printf ("Su numero de historia es: %d\n Su codigo es: %c\n Su importe es: $%d", historia, codigo, importe);
        break;

case 'M': printf ("Su numero de historia es: %d\n Su codigo es: %c\n Su importe es: $%d", historia, codigo, importe);
case 'm': printf ("Su numero de historia es: %d\n Su codigo es: %c\n Su importe es: $%d", historia, codigo, importe);
        break;

case 'T': printf ("Su numero de historia es: %d\n Su codigo es: %c\n Su importe es: $%d", historia, codigo, importe);
case 't': printf ("Su numero de historia es: %d\n Su codigo es: %c\n Su importe es: $%d", historia, codigo, importe);
        break;

default:
    printf ("Error. Codigo incorrecto, introduzca un codigo valido.");
}

return 0;

}

