#include<stdio.h>
int main(){
    double a;
    scanf("%lf",&a);
    int b,c,d;
    b=(int)(a/100);
    c=(int)((a-b*100)/10);
    d=(int)(a-b*100-c*10);

    printf("%d\t%d\t%d\t",b,c,d);
    printf("\t%d",d*100+c*10+b);
    return 0;

}
