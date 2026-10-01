#ifndef RAIZ_DIGITAL_H
#define RAIZ_DIGITAL_H
/*
* raiz_digital.h
* Modulo de calculo de raiz digital de un entero posit
ivo. Sin arreglos, sin punteros.
*/
/**
* @brief Suma los digitos de n (en base 10).
* @param n Entero no negativo.
* @return Suma de sus digitos.
*/
int suma_digitos(int n);
/**
* @brief Calcula la raiz digital de n aplicando suma_d
igitos iterativamente.
* @param n Entero no negativo.
* @return Digito entre 0 y 9.
*/
int raiz_digital(int n);
/**
* @brief Imprime la traza del colapso de n por stdout.
* @param n Entero no negativo.
*/
void imprimir_traza(int n);
#endif /* RAIZ_DIGITAL_H */

//¿Qué contiene el .h y qué no debe contener?
// El .h contiene las declaraciones de funciones y macros, pero no la implementación.
//¿Por qué el .h no debe tener definiciones de funciones
//(salvo static inline en casos avanzados)?
// Porque las definiciones de funciones en un archivo de encabezado pueden causar problemas de enlace 
//si se incluyen en múltiples archivos fuente. 
//Esto puede llevar a errores de "multiple definition" durante la compilación. 
//En su lugar, las funciones deben definirse en archivos fuente (.c) 
//y solo declararse en los archivos de encabezado (.h).
//¿Para qué sirven las directivas
//(#ifndef/#define/#endif)? Probar incluir el mismo .h
//dos veces en main.c y ver qué pasa con y sin guardas.
// Las directivas #ifndef, #define y #endif se utilizan para evitar la inclusión 
//múltiple de un archivo de encabezado.
//¿Por qué main.c solo necesita incluir raiz_digital.h y
//no raiz_digital.c?
// Porque main.c solo necesita conocer las declaraciones de las funciones
// para poder llamarlas. Incluir el archivo de encabezado proporciona esta información,
// mientras que incluir el archivo fuente podría causar problemas de enlace si se compila 
//junto con otros archivos fuente que también incluyen el mismo archivo fuente.