#include <stdio.h>
#include <stdlib.h>
void dividir(int a, int b, int *cociente, int *resto) {
    *cociente = a / b;
    *resto = a % b;
}
void reservar_entero(int **pp, int valor) {
    *pp = (int *)malloc(sizeof(int));
    if (*pp != NULL) {
        **pp = valor;
    }
}
int main(void) {
    int a = 10;
    int *p = &a;
    int **pp = &p;
    printf("a=%d, *p=%d, **pp=%d\n", a, *p, **pp);
    printf("&a=%p, p=%p, *pp=%p\n", (void *)&a, (void *)p, (void *)*pp);
    printf("&p=%p, pp=%p\n", (void *)&p, (void *)pp);
    **pp=99;
    printf("Luego del cambio: a=%d\n", a);
    int c= 0,r= 0;
    dividir(17, 5, &c, &r);
    printf("dividir(17, 5): cociente=%d, resto=%d\n", c, r);
    reservar_entero(&p, 42);
    printf("Tras reservar entero(&p, 42): *p=%d\n", *p);
    free(p);
    return 0;
}