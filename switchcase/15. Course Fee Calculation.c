#include<stdio.h>
int main() {
    printf("Course Fee Calculation\n");
    int a;
    char b;
    scanf("%d %c",&a,&b);
    int kg=0;
    switch (a) {
        case 1:
            if (b=='R') {
                printf("Rs.5000");
                break;
            }
            else if (b=='S') {
                printf("RS.3000");
                break;
            }
        case 2:
            if (b=='R') {
                printf("Rs.9000");
                break;
            }
            else if (b=='S') {
                printf("RS.7000");
                break;
                default:
                printf("Invalid Fee");
            }
    }