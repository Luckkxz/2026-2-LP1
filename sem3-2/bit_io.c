#include <stdio.h>
int main(void) {
    unsigned int n;
    printf("Ingrese un entero sin signo: ");
    if (scanf("%u", &n) != 1) {
        return 1;
    }
    printf("\nBinario (32 bits): ");
    for (int i = 31; i >= 0; i--) {
        putchar(((n >> i) & 1) ? '1' : '0');
        if (i % 4 == 0 && i != 0) {
            putchar(' ');
        }
    }
    putchar('\n');
    unsigned int temp = n;
    int unos = 0;
    while (temp != 0) {
        temp &= (temp - 1);
        unos++;
    }
    printf("\n%-15s | %s\n", "FORMATO", "VALOR");
    printf("----------------+-----------------\n");
    printf("%-15s | %u\n",   "Bits en 1",      unos);
    printf("%-15s | 0x%08X\n", "Hexadecimal",    n);
    printf("%-15s | 0%o\n",    "Octal",          n);
    printf("%-15s | %u\n",    "Decimal",        n);
    return 0;
}