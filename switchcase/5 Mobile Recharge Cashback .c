#include<stdio.h>
int main() {
    printf("Mobile Recharge Cashback");
    int plantype;
    int paymentmode;
    int amount=0,cashback=0;
    scanf("%d",&plantype);
    scanf("%d",&paymentmode);
    switch (plantype) {
        case 1:
            amount=199;
            break;
        case 2:
            amount=399;
            break;
        default:
            printf("Invalid Plan");
            return 0;
    }
    switch (paymentmode) {
        case 11:
        case 12:
            cashback=20;
            break;
        case 13:
            cashback=0;
            break;
        default:
            printf("Invalid Payment Mode");
            return 0;
    }
    printf("pay %d",amount-cashback);
    return 0;
}
