#include <stdio.h>

int main() {
    // a) Declarar un puntero a un literal de cadena (solo lectura)
    char *s = "Hola, mundo";

    // b y c) Recorrer con un puntero, imprimir con putchar y contar
    int contador = 0;
    char *p = s;
    
    printf("Cadena s: ");
    while (*p != '\0') {
        putchar(*p);
        contador++;
        p++;
    }
    printf("\nCaracteres contados en s: %d\n\n", contador);

    // e) Contraste: repetir con un arreglo modificable en el stack
    char s2[] = "Hola, mundo";
    
    int contador2 = 0;
    char *p2 = s2;
    
    printf("Cadena s2 original: ");
    while (*p2 != '\0') {
        putchar(*p2);
        contador2++;
        p2++;
    }
    printf("\nCaracteres contados en s2: %d\n", contador2);

    // Modificar s2 (esto sí funciona porque está en el stack)
    s2[0] = 'h';
    printf("Cadena s2 modificada: %s\n\n", s2);

    
    return 0;
}   
//a)¿Cuál es la diferencia entre char *s = "..." y char s[] = "..." en términos de memoria?
// La diferencia principal es que char *s = "..." declara un puntero a un literal de cadena que reside en la sección 
//de solo lectura del programa, mientras que char s[] = "..." declara un arreglo de caracteres en el stack que contiene una
// copia del literal de cadena. Esto significa que s puede apuntar a cualquier lugar y no se puede modificar el contenido del 
//literal, mientras que s2 es un arreglo modificable y su contenido puede cambiarse.
//b)¿Por qué intentar modificar un literal de cadena es comportamiento no definido?
// Intentar modificar un literal de cadena es comportamiento no definido porque los literales de cadena se almacenan en
// una sección de memoria de solo lectura. Cualquier intento de escribir en esa memoria puede causar
// un fallo de segmentación (segmentation fault) o corrupción de memoria, dependiendo del compilador y del sistema operativo.
//c) ¿Cuándo conviene cada declaración?
// La declaración char *s = "..." es conveniente cuando se necesita un puntero a una cadena constante que no se modificará,
// mientras que char s[] = "..." es útil cuando se necesita un arreglo de caracteres que se pueda modificar, como para
// construir o manipular cadenas dinámicamente en tiempo de ejecución.


