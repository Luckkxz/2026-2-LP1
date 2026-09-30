//Dado n (por ejemplo n = 5), imprimir el siguiente patrón sin
//usar arreglos ni cadenas:
//1
//1 2
//1 2 3
//1 2 3 4
//1 2 3 4 5
//1 2 3 4 5
//1 2 3 4
//1 2 3
//1 2
//1
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
    for(int i=1;i<=n;i++){
        int x=1;
        while(x<i+1){
        printf("%d ",x);
        x++;
        }
        printf("\n");
    }
    for(int j=n;j>0;j--){
        int y=1;
        int temp1=j;
        while(y<temp1+1){
            printf("%d ",y);
            y++;
        }
        printf("\n");
    }
    return 0;
}