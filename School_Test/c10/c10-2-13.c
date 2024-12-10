//
// Created by JiaMing Xu on 24-12-6.
//
#include <stdio.h>
int Px(int n,int x){
    if (n==0)
        return 1;
    else if (n==1)
        return x;
    else
        return ((2*n-1)*x*Px(n-1,x)-(n-1)*Px(n-2,x))/n;}
int main() {
    int n,x;
    printf("Input n x:");
    scanf("%d %d",&n,&x);
    if(n<0)
        printf("Input n>=0");
    else
        printf("%d",Px(n,x));
    return 0;
}

