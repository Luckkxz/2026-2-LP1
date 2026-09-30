// La conjetura de Collatz define: si n es par → n/2; si n es
//impar → 3n + 1. La "semilla" de un número es la cantidad de pasos
//hasta llegar a 1. Para n = 27 la semilla es 111.
//Escribir un programa que tenga la mayor cantidad de pasos para n
//perteneciente al dominio [1, 10000]
#include <stdio.h>
int main(void){
    int n=0;
    do{
        printf("Introduce el num : ");
        scanf("%d",&n);
        if(n<=0){
            printf("Num incorrecto\n");
        }
    }while(n<=0);
   //proc
   int temp=n;
   int semilla=0;
   while(temp!=1){
        if(temp%2==0){
            temp=temp/2;
        }else{
            temp=temp*3 +1;
        }
        semilla++;
   }
   printf("El num de pasos es %d" , semilla);
   return 0; 
}