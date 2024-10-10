#include <stdio.h>

int main ()

{

int valor_hora, horas_trabajadas, sueldo, premio, sueldo_con_premio, sueldo_con_adicional, adicional;

printf ("Ingrese el valor de su hora trabajada: $");
scanf ("%d", &valor_hora);
printf ("Ingrese la cantidad de horas que trabajo: ");
scanf ("%d", &horas_trabajadas);

premio = 500;
adicional = 1000;
sueldo = valor_hora * horas_trabajadas;

if (horas_trabajadas > 50 && horas_trabajadas <= 150)
{
   sueldo_con_premio = (valor_hora * horas_trabajadas) + premio;
   printf ("Su sueldo es: $%d", sueldo_con_premio);
}
else if (horas_trabajadas > 150)
{
   sueldo_con_adicional = sueldo + adicional + premio;
   printf ("Su sueldo es: $%d", sueldo_con_adicional);
}
else
{
    printf ("Su sueldo es: $%d", sueldo);
}

return 0;

}

