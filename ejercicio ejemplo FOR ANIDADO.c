#include <stdio.h>
int main()
{
int n, i, j;
printf("Ingrese el valor de n: \n");
scanf("%d",&n);
for(i=1; i<=n; i++)
{
for(j=1; j<=i; j++)
{
printf("*");
}
printf("\n");
}
return 0;
}
