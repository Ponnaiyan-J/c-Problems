#include<stdio.h>
int main() {
    printf("No Helmet(1)Rs.1000\n Signal Jump(2)Rs.1500 \n Over Speeding(3)Rs.2000\n");

    int violationType;
    scanf("%d",&violationType);
    switch (violationType) {
        case 1:
            printf("Fine Rs.1000");
            break;
        case 2:
            printf("Fine Rs.1500");
            break;
        case 3:
            printf("Fine Rs.2000");
            break;
    }
    return 0;
}