#include <stdio.h>

int main() {
    int potencia = 1;

    while (potencia <= 2048) {
        printf("%d\n", potencia);
        potencia *= 2;
    }

    return 0;
}
