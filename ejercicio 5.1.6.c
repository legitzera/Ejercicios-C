#include <stdio.h>

int main()
{
    int i, nota, legajo, cant_aplazos = 0;

    for (i = 1; i <= 10; i++)
    {
        printf ("Ingrese su numero de legajo (legajo nro %d) : ", i);
        scanf ("%d", &legajo);
        printf ("Ingrese la nota: ");
        scanf ("%d", &nota);

    if (nota >= 7)
    {
        printf ("El alumno con el legajo %d ha promomcionado\n", legajo);
    }
    else
    {
        cant_aplazos ++;
    }
    }


    printf("La cantidad de alumnos aplazados es: %d", cant_aplazos);

    return 0;
}
