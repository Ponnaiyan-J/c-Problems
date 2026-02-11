#include<stdio.h>
int main() {
    int a,b;
    scanf("%d %d",&b,&a);
    switch (a) {
        case 1:
            printf("Delevery Rs.50");
            break;
        case 2:
            if (b<1000) {
                printf("Delevery Rs.100");
            }
            else if (b>=100) {
                printf("Delevery Free");
            }
    }
}