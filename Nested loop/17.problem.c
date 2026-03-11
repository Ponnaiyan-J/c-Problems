#include <stdio.h>
int main() {
    for (int i=1;i<=4;i++) {
        for (int s=1;s<=5-i;s++) {
            printf(" ");
        }
        for (int j=1;j<=i;j++) {
            printf("%c",64+j);
        }
        for (int j=1;j<=i-1;j++) {
            printf("%c",64+(i-j));
        }
        printf("\n");
    }
}