#include<stdio.h>
int main() {
    printf("check valid Triangle\n");
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if (a+b+c==180){
        printf("Valid Triangle");
    }
    else {
        printf("Not Valid Triangle");
    }
    return 0;
}