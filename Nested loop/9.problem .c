#include<stdio.h>
int main() {
    for (int r=1;r<=5;r++) {
        for (int a=1;a<=5-r;a++) {
            printf(" ");
        }
        for (int b=1;b<=2*r-1;b++ ) {
            printf("*");
        }
        printf("\n");
    }

    for (int i=1;i<=5;i++) {
        for (int k=5;k>=7-i;k--) {
            printf(" ");
        }

        for (int j=9;j>=2*i-1;j--) {
            printf("*");
        }

        printf("\n");
    }