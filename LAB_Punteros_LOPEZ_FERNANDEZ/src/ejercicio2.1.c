#include <stdio.h>

int main() {
    // a) Declaración de variable, puntero y puntero a puntero
    int x = 42;
    int *p = &x;
    int **pp = &p;

    // b) Impresión de valores y direcciones (con cast a void* para %p)
    printf("x   = %d, &x   = %p\n", x, (void*)&x);
    printf("p   = %p, &p   = %p\n", (void*)p, (void*)&p);
    printf("pp  = %p, &pp  = %p\n\n", (void*)pp, (void*)&pp);

    // c) Modificación de x a través de *p
    *p = 100;
    printf("*p = 100 -> x = %d\n", x);

    // c) Modificación de x a través de **pp
    **pp = 200;
    printf("**pp = 200 -> x = %d\n", x);

    return 0;
}


//a) ¿Por qué printf("%p", p) requiere el cast (void *)?
// El cast a (void *) es necesario porque el especificador de formato %p 
//espera un puntero de tipo void *, y p es un puntero a int. Esto asegura que la
// dirección de memoria se imprima correctamente sin problemas de tipo.
//b) ¿Qué diferencia hay entre int *p e int* p? ¿Y entre int *p, q y int *p, *q?
// En C, no hay diferencia entre int *p e int* p; ambos declaran un puntero a int.
// Sin embargo, en la declaración int *p, q, p es un puntero a int, mientras que q es una variable de tipo int.
// En cambio, en int *p, *q, tanto p como q son punteros a int.