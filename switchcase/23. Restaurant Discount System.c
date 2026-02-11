#include<stdio.h>
int main() {
    printf("Restaurant Discount System\n");
    int customerType,billAmount,discount=0;
    scanf("%d %d",&customerType,&billAmount);
    switch (customerType) {
        case 1:
            billAmount-=(billAmount*0.05);
            break;
        case 2:
            billAmount-=(billAmount*0.15);
            break;
    }
    printf("pay Rs.%d",billAmount);
    return 0;
}
