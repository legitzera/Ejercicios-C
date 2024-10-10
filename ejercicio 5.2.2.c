#include <stdio.h>

int main()
{
    int dia, mes;

    dia = 1;
    mes = 1;

    while (dia >= 1 && dia <= 31 && mes >= 1 && mes <= 12)
{
        printf("Ingrese un dia numerico del mes: ");
        scanf("%d", &dia);
        printf("Ingrese un mes numerico del anio: ");
        scanf("%d", &mes);
}

    if (dia < 1 || dia > 31 || mes < 1 || mes > 12)
{
        printf("No se ingreso el valor correcto, reintentar.\n");
}

    return 0;
}

