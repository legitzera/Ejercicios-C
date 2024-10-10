#include <stdio.h>

int main ()

{

int n1, n2;

printf ("Ingrese un primmer numero: ");
scanf ("%d", &n1);
printf ("Ingrese un segundo numero: ");
scanf ("%d", &n2);

if (n1 % n2  == 0)
    printf ("El primer numero es divisible por el segundo");
else
    printf ("El primer numero NO es divisible por el segundo");

return 0;

}

