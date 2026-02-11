#include<stdio.h>
int main() {
    int roomtype,Rs=0;
    char season;
    scanf("%d %c",&roomtype,&season);
    switch (roomtype) {
        case 1:
            if(season=='A') {
               Rs=2500;
                break;
            }
            else if(season=='B'){
                Rs=2000;
                break;
            }
            break;
        case 2:
            if (season=='C') {
                Rs=4000;
                break;
            }
            else if (season=='D') {
                Rs=3000;
                break;
            }
    }
    printf("%d",Rs);
}