#include <stdio.h>

int main()
{
    float importe, total;
    char codigo;

    importe = 1;

    while (importe != 0)
{
        printf("Ingrese el importe total de la venta (0 para finalizar): ");
        scanf("%f", &importe);

        if (importe != 0)
        {
            printf("Ingrese el código de forma de pago (C: cheque, E: efectivo, T: tarjeta): ");
            fflush(stdin);
            scanf(" %c", &codigo);

            switch (codigo)
            {
                case 'C':
                case 'c':
                    total = importe * 1.20;
                    printf("El total a pagar con cheque es: $%.2f\n", total);
                    break;

                case 'E':
                case 'e':
                    total = importe * 0.90;
                    printf("El total a pagar en efectivo es: $%.2f\n", total);
                    break;

                case 'T':
                case 't':
                    total = importe * 1.12;
                    printf("El total a pagar con tarjeta es: $%.2f\n", total);
                    break;

                default:
                    printf("Código de forma de pago no válido.\n");
                    break;
            }
        }
}

    printf("Fin del programa.\n");
    return 0;
}

