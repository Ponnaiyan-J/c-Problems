#include<stdio.h>
int main() {
    printf("Email Validation Check\n");
    int a;
    scanf("%d",&a);
    if(a<=4) {
       printf("Invalid");
    }
    else {
        printf("Valid");
    }
    return 0;
}