#include <stdio.h>

int main ()

{

char transporte;

printf ("Ingrese el transporte utilizado: ");
fflush (stdin);
scanf ("%c", &transporte);

switch (transporte)
{
case 'T':
    printf ("el tiempo que se tarda con este transporte es: 90 minutos");
    break;

case 't':
    printf ("el tiempo que se tarda con este transporte es: 90 minutos");
    break;

case 'A':
    printf ("el tiempo que se tarda con este transporte es: 90 minutos");
    break;

case 'a':
    printf ("el tiempo que se tarda con este transporte es: 90 minutos");
    break;

case 'C':
    printf ("el tiempo que se tarda con este transporte es: 180 minutos");
    break;

case 'c':
    printf ("el tiempo que se tarda con este transporte es: 180 minutos");
    break;

case 'H':
    printf ("el tiempo que se tarda con este transporte es: 20 minutos");
    break;

case 'h':
    printf ("el tiempo que se tarda con este transporte es: 20 minutos");
    break;

default:
    printf ("Error. Medio de transporte inexistente");
}


return 0;

}

