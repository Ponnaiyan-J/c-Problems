#include<stdio.h>
int main() {
    printf("Online Exam Attempt \n");
    int a,b;
    scanf("%d %d",&a,&b);
    switch (a) {
        case 1:
            if (b<=100 && b>=80)
                printf("Excellent");
            else
                printf("Not Qualified");
            break;
        case 2:
            if (b<=100 && b>=60)
                printf("Good");
            else
                printf("Not Qualified");
            break;
        case 3:
            if (b<60)
                printf("Need Improvement");
            break;
            }
    }