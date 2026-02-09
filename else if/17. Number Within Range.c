#include<stdio.h>
int main() {
    printf("Number Within Range\n");
    int a;
    scanf("%d",&a);
    if (a>10 && a<20){
        printf("Number is Within Range");
    }
    else {
        printf("Number is Not Within Range");
    }
    return 0;
}