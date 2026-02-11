#include<stdio.h>
int main() {
    printf("Standard(1)\n Same Day(2)\n Pickup(3)\n");
    int deleveryMode;
    scanf("%d",&deleveryMode);
    switch (deleveryMode) {
        case 1:
            printf("Delivery Charge Rs.40");
            break;
        case 2:
            printf("Delivery Charge Rs.120");
            break;
        case 3:
            printf("Delivery Charge Rs.0");
            break;
    }
    return 0;
}