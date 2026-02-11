#include<stdio.h>
int main() {
    printf("Electricity Bill Late Fine\n");
    int delaydays,n=0;
    scanf("%d",&delaydays);
    if (delaydays<=5) {
        n=1;
    }
    else if (delaydays<=10) {
        n=2;
    }
    else
        n=3;
    switch (n) {
        case 1:
            delaydays*=50;
            break;
        case 2:
            delaydays*=100;
            break;
        case 3:
            delaydays*=200;
            break;
    }
    printf("Fine=RS.%d\n",delaydays);
    return 0;
}