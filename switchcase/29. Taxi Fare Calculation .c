#include<stdio.h>
int main() {
    printf("Taxi Fare Calculation\n");
    int vehicleType,d;
    scanf("%d %d",&vehicleType,&d);
    switch (vehicleType) {
        case 1:
            if (d) {
                d*=10;
                break;
            }
        case 2:
            if (d) {
                d*=15;
                break;
            }
        case 3:
            if (d) {
                d*=20;
                break;
            }
    }
    printf("Fare = %d",d);
    return 0;
}