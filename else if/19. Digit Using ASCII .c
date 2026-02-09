#include<stdio.h>
int main() {
    printf("Digit Using ASCII\n");
    int a;
    scanf("%d",&a);
    if (a>0 && a<9){
        printf("Digit");
    }
    else {
        printf("Not Digit");
    }
    return 0;
}