#include<stdio.h>
int main() {
    printf("Vehicle Insurance Premium\n");
    int a,age;
    scanf("%d %d",&a,&age);
    switch (a) {
        case 1:
            if (age<=5) {
                printf("Rs.1500");
                break;
            }
            else if (age>5) {
                printf("RS.2500");
                break;
            }
        case 2:
            if (age<=5) {
                printf("Rs.4000");
                break;
            }
            else if (age>5) {
                printf("RS.6000");
                break;
                default:
                printf("Invalid Fee");
            }
    }
}