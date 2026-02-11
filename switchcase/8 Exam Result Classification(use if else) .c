#include<stdio.h>
int main() {
    int a,b;
    scanf("%d %d",&a,&b);

    if (a<75) {
        printf("Fail");
    }
    else if (b>=75) {
        printf("Distinction");
    }
    else if (b<74 && b>50) {
        printf("Pass");
    }
    else
        printf("Fail");
    }