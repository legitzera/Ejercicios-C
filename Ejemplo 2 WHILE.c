#include <stdio.h>
int main()
{
 int cont;
 float temp, suma, prom;
 suma = 0;
 cont = 0;
 printf("Ingrese una temperatura (0 fin): ");
 scanf("%f",&temp);
 while(temp != 0)
 {
 suma += temp;
 cont ++;
 printf("Ingrese una temperatura (0 fin):");
 scanf("%f",&temp);
 }
 if(cont > 0)
 {
 prom = suma/cont;
 printf("El promedio de las temperaturas es: %.2f",prom);
 }
 else
 {
 printf("No se ingresaron temperaturas (la primera fue cero)");
 }
 return 0;
}

