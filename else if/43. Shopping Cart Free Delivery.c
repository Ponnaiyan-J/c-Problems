#include<stdio.h>
int main() {
    printf("Shopping Cart Free Delivery\n");
    int a;
    scanf("%d",&a);
    if(a>=499) {
       printf("Free Delivery");
    }
    else {
       printf("Delivery Charges Apply");
    }
    return 0;
}