#include <stdio.h>
int incrementar (int x){
    int inc=x+1;
    printf("Dentro de incrementar: x = %d\n", inc);
    return inc;
}
int main(void) {
    int n = 10;
    int sr=incrementar(n);
    printf("Despues de llamar: n = %d\n", sr);
    return 0;
}