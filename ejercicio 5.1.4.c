#include <stdio.h>

int main()
{
    int i, cant_vocal = 0;
    char vocal;

    for (i = 1; i <= 10; i++)
    {
        printf("Ingrese la letra numero %d : ", i);
        fflush (stdin);
        scanf("%c", &vocal);

    if (vocal == 'a' || vocal == 'A' || vocal == 'e' || vocal == 'E' || vocal == 'i' || vocal == 'I' || vocal == 'o' || vocal == 'O' || vocal == 'u' || vocal == 'U')
    {
            cant_vocal ++;
    }
    }

    if (cant_vocal > 0)
    {
        printf("La cantidad de vocales es: %d", cant_vocal);
    }
        else
    {
        printf ("No se ingresaron vocales\n");
    }



    return 0;
}
