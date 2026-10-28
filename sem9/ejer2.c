#include <stdio.h>
int main(void) {
    int numeros[5] = {10, 20, 30, 40, 50};
    int *ptr = numeros;
    for (int i = 0; i < 5; i++) {
    printf("numeros[%d] = %d\n", i, *(ptr + i));
    }  
    return 0;
}