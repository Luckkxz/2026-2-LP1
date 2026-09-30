//Enunciado: Dado un entero positivo n leído por teclado, calcular
//repetidamente la suma de sus dígitos hasta obtener un único dígito (raíz
//digital). Por ejemplo, n = 9875 → 9+8+7+5 = 29 → 2+9 = 11 →
//1+1 = 2. Raíz digital = 2.

#include <stdio.h>

int main(void) {
    int n = 0;

    // Validación de entrada
    do {
        printf("Introduce el num : ");
        scanf("%d", &n);
        if (n <= 0) {
            printf("Num incorrecto debe ser mayor a 0 \n");
        }
    } while (n <= 0);
    printf("Calculando la suma de cifras iterativamente ---\n");
    while (n >= 10) {
        int sum = 0;
        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }
        n = sum;
    }
    printf("Imprimiendo resultado: %d\n", n);
    return 0;
}