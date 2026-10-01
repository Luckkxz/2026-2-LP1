#include <stdio.h>
int contador = 0; // VARIABLE GLOBAL
void incrementar_global(void) {
    contador++; // modifica la GLOBAL
}
int main(void) {
    incrementar_global();
    incrementar_global();
    incrementar_global();
    printf("global contador = %d\n", contador);
    return 0;
}