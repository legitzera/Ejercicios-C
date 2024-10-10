#include <stdio.h>

int main()
{
    int i, dni, nota, mayor = 0, dni_nota = 0;

    for (i = 1; i <= 10; i++)
    {
        printf ("Ingrese el DNI del alumno %d : ", i);
        scanf ("%d", &dni);
        printf ("Ingrese el promedio de las notas de este alumno: ");
        scanf ("%d", &nota);

    if (nota > mayor)
    {
        mayor = nota;
        dni_nota =  dni;
    }
    }

    printf("El DNI del alumno de mayor promedio es: %d\nSu promedio es: %d", dni_nota, mayor);

    return 0;
}
