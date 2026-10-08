#include <stdio.h>
#include <ctype.h>
void hexdump(const void *ptr, size_t n) {
    const unsigned char *b = (const unsigned char *)ptr;
    for (size_t i = 0; i < n; i += 8) {
        printf("%04zx: ", i);
        for (size_t j = 0; j < 8; j++) {
            if (i + j < n) {
                printf("%02x ", b[i + j]);
            } else {
                printf("   ");
            }
        }   
        printf(" |");
        for (size_t j = 0; j < 8 && (i + j) < n; j++) {
            unsigned char c = b[i + j];
            putchar(isprint(c) ? c : '.');
        }
        printf("|\n");
    }
}
int main(void) {
    int v[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++) {
        printf("v[%d]=%d (0x%08X) %p\n", i, v[i], v[i], (void *)&v[i]);
        printf("bytes: ");
        unsigned char *p = (unsigned char *)&v[i];
        for (size_t j = 0; j < sizeof(int); j++) {
            printf("%02x ", *(p + j));
        }
        printf("\n");
    }
    double d = 3.14;
    printf("double d=%.2f\n", d);
    printf("bytes: ");
    unsigned char *pd = (unsigned char *)&d;
    for (size_t j = 0; j < sizeof(double); j++) {
        printf("%02x ", *(pd + j));
    }
    printf("\n");
    printf("Hexdump v\n");
    hexdump(v, sizeof(v));
    printf("Hexdump_double \n");
    hexdump(&d, sizeof(d));
    return 0;
}