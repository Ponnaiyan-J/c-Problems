#include<stdio.h>
int main() {
    printf("Power Cut Alert System");
    int hours,n=0;
    scanf("%d",&hours);
    if (hours<=1) {
        n=1;
    }
    else if (hours<=4) {
        n=2;
    }
    else
        n=3;
    switch (n) {
        case 1:
            printf("Short Interruption");
            break;
        case 2:
            printf("Medium Interruption");
            break;
        case 3:
            printf("Long Interruption");
            break;
            }
    return 0;
}