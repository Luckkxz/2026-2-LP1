//Enunciado: Escribe src/aritmetica.c que:
//a) Declare int v[8] = {10, 20, 30, 40, 50, 60, 70, 80};
//b) Declare int *p = v; (equivalente a &v[0]).
//c) Imprima:
//i. *p, *(p+1), *(p+7).
//ii. p[3], 3[p] (¡sí, es válido en C y equivalente a *(3+p)!).
//iii. La diferencia (p + 5) - p (debe ser 5, no 20).
//iv. El tamaño de un int con sizeof(int).
//d) Recorra el arreglo con aritmética de punteros (no con v[i]) y sume todos los
//elementos.
//e) Recorra el arreglo en reversa con un puntero que empiece en &v[7] y
//decremente.

#include <stdio.h>
#include <stddef.h>

int main() {
    int v[8] = {10, 20, 30, 40, 50, 60, 70, 80};
    int *p = v;

    printf("*p        = %d\n", *p);
    printf("*(p+1)    = %d\n", *(p+1));
    printf("*(p+7)    = %d\n", *(p+7));
    printf("p[3]      = %d\n", p[3]);
    printf("3[p]      = %d\n", 3[p]); 
    printf("(p+5) - p = %td\n", (p + 5) - p); 
    printf("sizeof(int) = %zu\n\n", sizeof(int));

    // d) Recorrer forward sumando elementos
    int suma = 0;
    printf("Recorrido forward: ");
    for (int *ptr = p; ptr < p + 8; ptr++) {
        printf("%d ", *ptr);
        suma += *ptr;
    }
    printf("\nSuma: %d\n", suma);

    // e) Recorrer en reversa
    printf("Recorrido reverse: ");
    for (int *ptr = &v[7]; ptr >= v; ptr--) {
        printf("%d ", *ptr);
    }
    printf("\n");

    /* Verificación para la pregunta guía (a)
    printf("\nDiferencia en bytes: %td\n", (char*)(p+5) - (char*)p);
    */

    return 0;
}
//a) Concepto clave: ¿Cómo verificar que p + 5 suma 5 * sizeof(int) bytes?
// Se puede verificar imprimiendo la diferencia en bytes entre (char*)(p+5) y (char*)p, que debe ser 5 * sizeof(int). 
//Esto demuestra que el puntero se ha incrementado correctamente en términos de elementos del tipo int.
//b)¿Por qué p[i] es exactamente *(p + i)? ¿Qué dice el estándar C al respecto?
// En C, la notación p[i] es definida como *(p + i) por el estándar del lenguaje. 
//Esto significa que acceder al elemento i de un arreglo a través de un puntero es equivalente a 
//desreferenciar el puntero desplazado por i posiciones.
//c)¿Por qué 3[p] compila? Explicar la conmutatividad de + y la definición de [].
// La expresión 3[p] compila porque el operador [] es definido como *(p + i), y debido a la conmutatividad de la suma,
//*(p + i) es equivalente a *(i + p), lo que permite que 3[p] sea interpretado como *(3 + p), 
//accediendo al mismo elemento que p[3].
//d)Trampa: ¿qué pasa con p + 8 (uno más allá del último elemento)? ¿Es válido crearlo? ¿Se puede desreferenciar?
// Sí, es válido crear el puntero p + 8, ya que apunta a la dirección inmediatamente después del último elemento del arreglo.
// Sin embargo, desreferenciar p + 8 es indefinido y puede causar errores, ya que no apunta a un elemento válido del arreglo.
