#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int n = 0;
    char buffer[1024];
    do {
        printf("Cuantas cadenas: ");
        if (scanf("%d", &n) != 1) {
            return 1;
        }
    } while (n < 1 || n > 10);
    while (getchar() != '\n');
    char **lineas = (char **)malloc((size_t)n * sizeof(char *));
    if (lineas == NULL) {
        return 1;
    }
    for (int i = 0; i < n; i++) {
        printf("Cadena %d: ", i + 1);
        if (fgets(buffer, sizeof(buffer), stdin) == NULL) {
            buffer[0] = '\0';
        }
        buffer[strcspn(buffer, "\r\n")] = '\0';
        size_t len = strlen(buffer);
        lineas[i] = (char *)malloc(len + 1);
        if (lineas[i] == NULL) {
            for (int j = 0; j < i; j++) {
                free(lineas[j]);
            }
            free(lineas);
            return 1;
        }
        strcpy(lineas[i], buffer);
    }
    printf("\n");
    for (int i = 0; i < n; i++) {
        printf("lineas[%d] @ %p -> \"%s\" (len=%zu)\n", i, (void *)lineas[i], lineas[i], strlen(lineas[i]));
    }
    for (int i = 0; i < n; i++) {
        free(lineas[i]);
    }
    free(lineas);
    return 0;
}
//a) ¿Por qué char **lineas y no char *lineas? ¿Qué representa cada nivel?
// char **lineas es un puntero a un puntero a char, lo que permite representar un arreglo de cadenas (cada cadena es un puntero 
//a char).
//b)¿Por qué cada lineas[i] necesita su propio malloc? ¿No bastaba con uno solo?
// Cada lineas[i] necesita su propio malloc porque cada cadena puede tener una longitud diferente, y necesitamos reservar
// espacio de memoria independiente para cada una. Un solo malloc no sería suficiente para almacenar múltiples cadenas
//c)Crítico: el orden de liberación importa: primero los lineas[i], luego lineas.¿Por qué al revés causaría leak?
// Si liberamos primero lineas, perderíamos la referencia a los punteros individuales lineas[i], lo que impediría liberar
// la memoria asignada a cada cadena, causando un memory leak. Por eso, primero debemos liberar cada lineas[i] y luego 
//liberar lineas.