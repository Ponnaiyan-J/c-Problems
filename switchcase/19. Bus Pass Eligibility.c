#include<stdio.h>
int main() {
    printf(" Bus Pass Eligibility\n");
    int a,d;
    scanf("%d %d",&a,&d);
    switch (a) {
        case 1:
            if (d<=30)
                printf("Eligible");
            else if (d>30)
                printf("Eligible with Extra Fee");
            break;
        case 2:
            if (d<=30){
            printf("Eligible");
    }
            else if (d>30) {
                printf("Not Eligible");
                break;
            }
    }
}