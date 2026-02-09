#include<stdio.h>
int main() {
    printf(" Railway Ticket Status\n");
    int a;
    scanf("%d",&a);
    if(a<=0) {
       printf("waiting");
    }
    else {
        printf("Confirmed");
    }
    return 0;
}