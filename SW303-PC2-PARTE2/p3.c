#include <stdio.h>
#include <stdlib.h>
int minimo(const int *v, int n, int *out) {
    if (v==NULL || n<=0 || out==NULL) return 0;
    int min = v[0];
    for (int i=1;i<n;i++) {
        if (v[i]<min) min=v[i];
    }
    *out=min;
    return 1;
}
int maximo(const int *v, int n, int *out) {
    if (v==NULL || n<=0 || out==NULL) return 0;
    int max=v[0];
    for (int i=1;i<n;i++) {
        if (v[i]>max) max=v[i];
    }
    *out=max;
    return 1;
}
int suma(const int *v, int n, long long *out) {
    if (v==NULL || n<=0 || out==NULL) return 0;
    long long s=0;
    for (int i=0;i<n;i++) {
        s += v[i];
    }
    *out =s;
    return 1;
}
int promedio(const int *v, int n, double *out) {
    if (v== NULL || n<=0 || out==NULL) return 0;
    long long s=0;
    if (!suma(v,n,&s)) return 0;
    *out = (double)s / n;
    return 1;
}
int main(void) {
    int n = 0;
    printf("El valor de n = ");
    if (scanf("%d", &n) != 1 || n < 1 || n > 1000) {
        return 1;
    }
    int *v = (int *)calloc((size_t)n, sizeof(int));
    if (v == NULL) return 1;
    printf("Ingrese %d enteros: ", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &v[i]) != 1) {
            free(v);
            return 1;
        }
    }
    int min=0,max=0;
    long long s=0;
    double avg = 0.0;
    if (minimo(v,n,&min) && maximo(v,n,&max) && suma(v,n,&s) && promedio(v,n,&avg)) {
        printf("Minimo: %d\n", min);
        printf("Maximo: %d\n", max);
        printf("Suma: %lld\n", s);
        printf("Promedio: %.2f\n", avg);
    }
    free(v);
    return 0;
}
