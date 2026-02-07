#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d",&a,&b);
    c=(a>0 && b>0)||(a==0 || b==0);
    printf("%d",c);
    return 0;
}