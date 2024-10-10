#include <stdio.h>

int main ()
{

int importe, numero;
char codigo;

printf ("Ingrese su numero de historia de paciente: ");
scanf ("%d", &numero);

printf ("Ingrese su codigo: ");
fflush (stdin);
scanf ("%c", &codigo);

switch (codigo)
{
case 'A':
case 'a': importe = 20;
break;

case 'D':
case 'd': importe = 40;
break;

case 'F':
case 'f': importe = 60;
break;

case 'M':
case 'm':
case 'T':
case 't': importe = 150;
break;

default: printf ("Codigo incorrecto");
}

printf ("Su numero de historia es: %d\n Su codigo es: %c\n Su importe a pagar es: $%d", numero, codigo, importe);

return 0;

}
