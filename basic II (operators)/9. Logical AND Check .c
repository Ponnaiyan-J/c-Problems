#include<stdio.h>
int main() {
    printf("Check if a number lies between 10 and 50\n");
    int a;
    scanf("%d",&a);
    if (a>10 && a<50) {
        printf("yes");
    }
    else {
        printf("No");
    }
    return 0;
}