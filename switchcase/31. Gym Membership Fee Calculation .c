#include<stdio.h>
int main() {
    printf("Gym Membership Fee Calculation:\n1 Month Rs.1500\n3 Months Rs.4000 \n6 Months Rs.7000\n");

    int durationType;
    scanf("%d",&durationType);
    switch (durationType) {
        case 1:
            printf("Membership Fee Rs.1500");
            break;
        case 2:
            printf("Membership Fee Rs.4000");
            break;
        case 3:
            printf("Membership Fee Rs.7000");
            break;
    }
    return 0;
}