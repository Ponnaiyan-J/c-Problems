#include<stdio.h>
int main() {
    printf("Petrol(1)Rs.105 per litre\n Diesel(2)Rs.92 per litre \n CNG(3)Rs.85 per litre\n");
    int classType;
    scanf("%d",&classType);
    switch (classType) {
        case 1:
            printf("1,10-Fuel Cost Rs.1050");
            break;
        case 2:
            printf("2,5-Fuel Cost Rs.460");
            break;
        case 3:
            printf("3,8-Fuel Cost Rs.680");
            break ;
        default:
            printf("Invalid classtype");
    }
    return 0;
}