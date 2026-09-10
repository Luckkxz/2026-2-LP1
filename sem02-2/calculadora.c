#include <stdio.h>
int main(){
    const float PI = 3.14159;
    int num1, num2;
    float resultado;
    printf("--- CALCULADORA BÁSICA ---\n");
    printf("Ingrese dos números enteros:\n");
 
    printf("Primer número: ");
    scanf("%d", &num1);
    printf("Segundo número: ");
    scanf("%d", &num2);
    printf("\n--- RESULTADOS ---\n");
    printf("%d + %d = %d\n", num1, num2, num1 + num2);
    printf("%d - %d = %d\n", num1, num2, num1 - num2);
    printf("%d * %d = %d\n", num1, num2, num1 * num2);
    resultado = (float)num1 / num2;
    printf("%d / %d = %.2f\n", num1, num2, resultado);

    printf("%d %% %d = %d\n", num1, num2, num1 % num2);

    printf("\n--- OPERADORES ESPECIALES ---\n");
    int x = num1;
    printf("x = %d\n", x);
    printf("x++ = %d\n", x++);
    printf("Después de x++: x = %d\n", x);
    printf("++x = %d\n", ++x);
    return 0;
}