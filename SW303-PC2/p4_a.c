#include <stdio.h>
int ackermann(int m,int n, int report){
    static int llamadas=0;
    if(report) return llamadas;
    llamadas++;
    if(m==0)return n+1;
    if(m>0 && n==0 ) return ackermann(m-1,1,0);
    return ackermann (m-1,ackermann (m,n-1,0),0);




}
int main(void){
    int r=ackermann(3,4,0);
    int total = ackermann(0,0,1);
    printf("el ackermann 3,4 = %d ",r);
    printf("total llamadas : %d",total);
    return 0;
}