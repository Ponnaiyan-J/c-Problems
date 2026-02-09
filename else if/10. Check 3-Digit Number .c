#include<stdio.h>
int main() {
    printf("Check 3-Digit Number\n");
    int a;
    scanf("%d",&a);
    if (a>99 && a<1000){
        printf("Three-Digit Number");
    }
    else {
        printf("Not Three-Digit Number");
    }
    return 0;
}