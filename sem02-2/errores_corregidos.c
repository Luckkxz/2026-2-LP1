#include <stdio.h>
int main() {
    int contador = 0;
    printf("Contador: %d\n", contador);
    int a = 10, b = 2;
    if (b != 0) {
    int division = a / b;
    printf("División: %d\n", division);
    } else {
    printf("Error: División por cero\n");
    }
    char nombre[10];
    printf("Ingrese su nombre: ");
    fgets(nombre, sizeof(nombre), stdin);
    printf("Nombre: %s", nombre);
    float precio = 19.99;
    printf("Precio: %.2f\n", precio);
    return 0;
}
