#include<stdio.h>
int main() {
    printf("Parking Fee Calculator\n");
    int a,b;
    scanf("%d %d",&a,&b);
    int parkingFee=0;
    switch (a) {
        case 1:
            parkingFee=10;
            b*=parkingFee;
            printf("Parking Fee %d",b);
            break;
        case 2:
            parkingFee=20;
            b*=parkingFee;
            printf("Parking Fee %d",b);
            break;
        default:
                b*=20;
            printf("Invalid Vechile Type : Parking Fee %d",b);
            break;
            }
    }