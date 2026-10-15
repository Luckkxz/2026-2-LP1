#include <stdio.h>
#include "racional.h"
int main(void){
    int n1,n2,d1,d2;
    int n_res[1],d_res[1];
    printf("Fraccion 1");
    scanf("%d %d",&d1,&n1);
    printf("Fraccion 2");
    scanf("%d %d", &n2 , &d2);
    sumar(n1,n2,d1,d2,n_res,d_res);
    printf("Resultado : %d / %d " , n_res[0] , d_res[0] );
    return 0;
}