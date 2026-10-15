#include <racional.h>
#include <stdlib.h>
static int es_primo(int n){
    if(n<=1) return 0;
    for(int i=2;i*i<=n;i++){
        if(n%i==0)return 0;
    }
    return 1;
}
int mcd(int a,int b){
    a=abs(a);
    b=abs(b);
    return (b==0) ? a : mcd (b,a%b);
}
void simplificar(int num[],int den[]){
    if(den[0]==0)return ;
    int d=mcd(num[0],den[0]);
    num[0]/=d;
    den[0]/=d;
    if(den[0]<0){
        num[0]=-num[0];
        den[0]=-den[0];
    }
}
void sumar(int n1,int d1,int n2,int d2, int n_res[], int d_res[]){
    n_res[0]= (n1*d2) + (n2*d1);
    d_res[0]=d1*d2;
    simplificar(n_res,d_res);
}