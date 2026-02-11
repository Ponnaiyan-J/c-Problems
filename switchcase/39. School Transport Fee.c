#include<stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    switch (a) {
        case 1:
            printf("Transport Fee Rs.800");
            break;
        case 2:
            printf(" Transport Fee Rs.1200");
            break;
        case 3:
            printf("Transport Fee Rs.1800");
            break;
        default:
            printf("Invalid Fee");
    }
    return 0;
}