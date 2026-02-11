#include<stdio.h>
int main() {
    printf("Water Bill Calculation\n");
    int a,u;
    scanf("%d %d",&a,&u);
    switch (a) {
        case 1:
            if (a<=30) {
                u*=5;
            }
            else {
                u=(a*5)+(u-30)*8;
            }
            break;
        case 2:
            if (u){
                u*=10;
                break;
            }
    }
    printf("Bill Rs.%d",u);
    return 0;
}