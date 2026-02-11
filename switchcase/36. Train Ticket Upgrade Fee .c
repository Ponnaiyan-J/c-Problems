#include<stdio.h>
int main() {
    printf("Sleeper(1)Rs.300\n3AC(2)Rs.800\n2AC(3)Rs.1500\n");
    int classType;
    scanf("%d",&classType);
    switch (classType) {
        case 1:
            printf("Upgrade Fee Rs.500");
            break;
        case 2:
            printf("Upgrade Fee Rs.800");
            break;
        case 3:
            printf("Upgrade Fee Rs.1500");
            break ;
        default:
            printf("Invalid classtype");
    }
    return 0;
}