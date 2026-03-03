#include<stdio.h>

float intstcal(int a,int b,int c){
    return (a*b*c)/100;
}

int main() {
    int p,r,t;
    scanf("%d%d%d",&p,&r,&t);
    float intst=intstcal(p,r,t);
    printf("%.2f",intst);
}