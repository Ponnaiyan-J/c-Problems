#include<stdio.h>
int main() {
    printf("  Check if a number is NOT zero\n");
    int a,b;
    scanf("%d",&a);
    b=a==0;
    if (!b==0){
        printf("Zero");
    }
    else {
        printf("Not Zero");
    }