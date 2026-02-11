#include<stdio.h>
int main() {
    printf(" Check if a number is less than 10 OR greater than 100\n");
    int a;
    scanf("%d",&a);
    if (a<10 || a>100) {
        printf("yes");
    }
    else {
        printf("No");
    }
    return 0;
}