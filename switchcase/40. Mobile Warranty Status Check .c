#include<stdio.h>
int main() {
    int y;
    scanf("%d",&y);

    switch (y) {
        case 0:
            printf("Under Warrenty");
            break;
        case 1:
            printf("Under Warrenty");
            break;
        case 2:
            printf("Limited Warrenty");
            break;
        case 3:
            printf("Out of Warrenty");
            break;
        default:
            printf("Invalid Warrenty");
    }
    return 0;
}