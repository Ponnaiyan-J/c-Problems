#include<stdio.h>
int main() {
    printf("vote eligibility\n");
    int a;
    scanf("%d",&a);
    if (a>=18){
        printf("you are eligible for vote");
    }
    else {
        printf("you are not eligible for vote");
    }
    return 0;
}