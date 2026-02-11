#include<stdio.h>
int main() {
    printf("Toll Plaza Charge System\n");
    int a,b;
    scanf("%d %d",&a,&b);
    int c=240;
    switch (a) {
        case 1:
            if (b==1) {
                printf("Rs.100");
                break;
            }
            else if (b<=2 && b>=10) {
                printf("Rs.800");
                break;
            }
            else
                printf("Rs.800");
            break;

        case 2:
            if (b==1) {
                printf("Rs.240");
                break;
            }
            else
                c=240;
                b*=c;
                printf("Rs.%d",b);
            }
    }