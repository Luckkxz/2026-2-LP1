#include <stdio.h>

int suma_digitos(int n) {
    int suma = 0;
    while (n > 0) {
        suma += n % 10;
        n /= 10;
    }
    return suma;
}

// 2. Aplica suma_digitos hasta obtener un dígito
int raiz_digital(int n) {
    while (n > 9) {
        n = suma_digitos(n);
    }
    return n;
}

// 3. Imprime la traza con el formato "9875 -> 29 -> 11 -> 2"
void imprimir_traza(int n) {
    printf("%d", n); // Imprime el número inicial
    while (n > 9) {
        n = suma_digitos(n);
        printf(" -> %d", n); // Imprime la flecha y el siguiente paso
    }
    printf("\n");
}

int main() {
    int n;

    printf("Introduce un entero positivo: ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("El numero debe ser positivo.\n");
        return 1; 
    }

    // Llamamos a la función que imprime todo el proceso paso a paso
    imprimir_traza(n);

    // Opcional: imprimir el resultado final explícitamente llamando a raiz_digital
    printf("Raiz digital = %d\n", raiz_digital(n));

    return 0;
}