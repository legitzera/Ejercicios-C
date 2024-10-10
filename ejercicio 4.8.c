#include <stdio.h>

int main ()

{

char caracter;

printf ("Ingrese un caracter: ");
fflush (stdin);
scanf ("%c", &caracter);


if (caracter == 'a' || caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter == 'u' ||
    caracter == 'A' || caracter == 'E' || caracter == 'I' || caracter == 'O' || caracter == 'U')
    {
        printf("VOCAL\n");
    } else
    {
        printf("El caracter ingresado no es una vocal.\n");
    }

return 0;

}

