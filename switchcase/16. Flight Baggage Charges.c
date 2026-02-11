#include<stdio.h>
int main() {
    printf("Flight Baggage Charges\n");
    int a,b;
    scanf("%d %d",&a,&b);
    int kg=0;
    switch (a) {
        case 1:
            kg=300;
            b*=kg;
            printf("Extra Baggage Charge Rs.%d",b);
            break;
        case 2:
            if (b<=3) {
                printf("free");
                break;;
            }
            else
                kg=300;
                b=(b-3)*kg;
                printf("Extra Baggage Charge Rs.%d",b);
                break;
            }
    }