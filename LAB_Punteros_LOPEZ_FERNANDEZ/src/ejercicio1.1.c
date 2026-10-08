#include <stdio.h>

int main() {
    int datos[10];
    int suma = 0, minimo, maximo, indice_minimo = 0, indice_maximo = 0;
    int pares = 0, impares = 0;

    printf("Ingrese 10 enteros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &datos[i]);
    }

    // Inicializar mínimo y máximo con el primer elemento
    minimo = datos[0];
    maximo = datos[0];

    // Cálculos y estadísticas
    for (int i = 0; i < 10; i++) {
        suma += datos[i];
        
        if (datos[i] % 2 == 0) {
            pares++;
        } else {
            impares++;
        }

        // Encontrar mínimo y máximo
        if (datos[i] < minimo) {
            minimo = datos[i];
            indice_minimo = i;
        }
        if (datos[i] > maximo) {
            maximo = datos[i];
            indice_maximo = i;
        }
    }

    double promedio = (double)suma / 10.0;

    // Impresión de estadísticas
    printf("Suma      : %d\n", suma);
    printf("Promedio  : %.2f\n", promedio);
    printf("Minimo    : %d (indice %d)\n", minimo, indice_minimo);
    printf("Maximo    : %d (indice %d)\n", maximo, indice_maximo);
    printf("Pares     : %d\n", pares);
    printf("Impares   : %d\n", impares);

    // Impresión del arreglo original
    printf("Original  : ");
    for (int i = 0; i < 10; i++) {
        printf("%d%s", datos[i], (i < 9) ? ", " : "\n");
    }

    // Inversión in-place usando variable temporal
    for (int i = 0; i < 5; i++) {
        int temp = datos[i];
        datos[i] = datos[9 - i];
        datos[9 - i] = temp;
    }

    // Impresión del arreglo invertido
    printf("Invertido : ");
    for (int i = 0; i < 10; i++) {
        printf("%d%s", datos[i], (i < 9) ? ", " : "\n");
    }

    return 0;
}


//a) ¿Cómo se relaciona datos[i] con *(datos + i)?
//En C, el arreglo datos se puede tratar como un puntero al primer elemento del arreglo.
 //Por lo tanto, datos[i] y *(datos + i) son equivalentes y se refieren al mismo valor 
 //en memoria.
 //b)¿Qué pasa si imprimen sizeof(datos) / sizeof(datos[0])? ¿Y si datos fuera un parámetro de función?
 //Si imprimen sizeof(datos) / sizeof(datos[0]), obtendrán el número de elementos en el arreglo, que es 10 en este caso.
 //Sin embargo, si datos fuera un parámetro de función, sizeof(datos) devolvería el
 // tamaño del puntero (generalmente 4 u 8 bytes dependiendo de la arquitectura), y 
 //no el tamaño del arreglo, por lo que el resultado sería incorrecto para determinar el número de elementos.