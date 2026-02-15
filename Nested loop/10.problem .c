#include<stdio.h>
int main() {
    for (int r=1;r<=5;r++) {

        for (int b=1;b<=r;b++ ) {
            printf("*");
        }
        printf("\n");
    }

    for (int i=1;i<=5;i++) {
        for (int j=4;j>=i;j--) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
    }