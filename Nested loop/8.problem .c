#include<stdio.h>
int main() {

    for (int i=1;i<=4;i++) {
        for (int k=5;k>=6-i;k--) {
            printf(" ");
        }

        for (int j=7;j>=2*i-1;j--) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}