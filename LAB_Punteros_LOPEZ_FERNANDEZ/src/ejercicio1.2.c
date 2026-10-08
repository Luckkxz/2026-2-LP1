#include <stdio.h>

int main() {
    // a) Declarar int m[3][4] en el stack
    int m[3][4];
    int suma_total = 0;
    int sumas_filas[3] = {0};
    int sumas_columnas[4] = {0};

    // Inicializar con valores leídos por teclado
    printf("Ingrese los 12 valores para la matriz 3x4:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &m[i][j]);
            
            // c) i-iii. Cálculos de sumas
            suma_total += m[i][j];
            sumas_filas[i] += m[i][j];
            sumas_columnas[j] += m[i][j];
        }
    }

    printf("\n");

    // b) Imprimir la matriz alineada
    printf("Matriz 3x4:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%4d", m[i][j]);
        }
        printf(" | suma fila = %d\n", sumas_filas[i]);
    }
    printf("  ----------------\n");
    
    // Imprimir suma de columnas
    for (int j = 0; j < 4; j++) {
        printf("%4d", sumas_columnas[j]);
    }
    printf("  (sumas de columnas)\n\n");

    // Imprimir suma total
    printf("Suma total: %d\n\n", suma_total);

    // c) iv. Transpuesta int t[4][3]
    int t[4][3];
    printf("Transpuesta 4x3:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            t[i][j] = m[j][i];
            printf("%4d", t[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    // d) Multiplicar m por un escalar k
    int k;
    printf("Ingrese el escalar k: ");
    scanf("%d", &k);
    
    printf("Escalar k = %d:\n", k);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%4d", m[i][j] * k);
        }
        printf("\n");
    }

    
    return 0;
}

//a) ¿Cómo se almacena int m[3][4] en memoria? ¿Es un bloque contiguo?
// Sí, la matriz m[3][4] se almacena en memoria como un bloque contiguo de 12 enteros. 
//Los elementos se almacenan en orden de fila principal (row-major order), es decir, primero se 
//almacenan todos los elementos de la primera fila, luego los de la segunda fila, y finalmente los de la tercera fila.
//b)¿Cuál es la diferencia entre m[i][j] y *(*(m + i) + j)?
// m[i][j] es la notación de acceso a elementos de un arreglo bidimensional, mientras que *(*(m + i) + j) 
//es la notación de punteros para acceder al mismo elemento.