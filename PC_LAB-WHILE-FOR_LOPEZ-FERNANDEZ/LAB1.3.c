//Enunciado: Calcular la suma de la serie alternada:
//S = 1 - 1/2 + 1/3 - 1/4 + ... ± 1/N
//hasta que el término actual sea menor que una TOLERANCIA = 1e-6
//(leída o predefinida). La serie converge a ln(2) ≈ 0.693147.
//Salida esperada:
//Tolerancia: 0.000001
//Iteraciones: 500000 (aprox.)
//Suma calculada : 0.693146
//ln(2) esperado : 0.693147
//Error absoluto : 0.000001

#include <stdio.h> 

int main() {
    double tolerancia = 1e-6;
    double suma = 0.0;
    double termino = 1.0; 
    int n = 1;
    int signo = 1;
    
    
    double ln2_esperado = 0.693147;
    double error_absoluto;

    
    while (termino >= tolerancia) {
        suma = suma + (signo * termino);
        n = n + 1;
        termino = 1.0 / n;
        signo = signo * -1; 
    }

    int iteraciones = n - 1;

    
    error_absoluto = ln2_esperado - suma;
    if (error_absoluto < 0) {
        error_absoluto = error_absoluto * -1;
    }

    // Impresión de la salida esperada
    printf("Tolerancia: 1e-6\n");
    printf("Iteraciones: %d\n", iteraciones);
    printf("Suma calculada %f\n", suma);
    printf("ln(2) esperado: %f\n", ln2_esperado);
    printf("Error absoluto: %f\n", error_absoluto);

    return 0;
}

 
