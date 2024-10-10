#include <stdio.h>

int main ()

{

int edad, dia_actual, mes_actual, anio_actual, dia_nac, mes_nac, anio_nac;


printf ("ingrese la fecha actual (en formato dia/mes/anio) : ");
scanf ("%d%d%d", &dia_actual, &mes_actual, &anio_actual);

printf ("Ingrese su fecha de nacimiento (en formato dia/mes/anio) : ");
scanf ("%d%d%d", &dia_nac, &mes_nac, &anio_nac);

edad = anio_actual - anio_nac;

switch (mes_actual)
{
case 1:
case 2:
case 3:
case 4:
case 5:
case 6:
case 7:
case 8:
case 9:
case 10:
case 11: if (mes_actual < mes_nac || (mes_actual == mes_nac && dia_actual <dia_nac))
{
    edad --;
}
break;

case 12: if (mes_actual == mes_nac && dia_actual < dia_nac)
{
    edad --;
}
break;

default:
    printf ("Error. fecha ingresada no valida.");
}

printf ("Su edad actual es: %d", edad);

return 0;

}

