#include <stdio.h>
int main(void) {
    int numero = 100;
    int *ptr = &numero;
    int **pptr = &ptr;
    printf("numero = %d\n", numero);
    printf("*ptr = %d\n", *ptr);
    printf("**pptr = %d\n", **pptr);
    **pptr = 200;
    printf("Nuevo numero = %d\n", numero);
    return 0;
}