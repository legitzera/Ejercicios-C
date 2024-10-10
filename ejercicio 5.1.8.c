#include <stdio.h>

int main()
{
    int i, edad, estatura, suma_edad, suma_estatura, cant_edad = 0, cant_estatura = 0;
    float edad_promedio, estatura_promedio;

    for (i = 1; i <= 10; i++)
    {
        printf ("Ingrese la edad del alumno %d : ", i);
        scanf ("%d", &edad);
        suma_edad += edad;
        printf ("Ingrese su estatura (en cm): ");
        scanf ("%d", &estatura);
        suma_estatura += estatura;

    if (edad > 10)
    {
        cant_edad ++;
    }
    else if (estatura < 140)
    {
        cant_estatura ++;
    }
    }

    edad_promedio = (float)suma_edad / 10;
    estatura_promedio = (float)suma_estatura / 10;

    printf("La cantidad de alumnos mayores a 10 anios es: %d\n La cantidad que miden menos de 140 cm es: %d\n La edad promedio es: %.2f\n La estatura promedio es: %.2f cm", cant_edad, cant_estatura, edad_promedio, estatura_promedio);



    return 0;
}
