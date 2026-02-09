#include<stdio.h>
int main() {
    printf("Number Sign with Zero Check\n");
    int a;
    scanf("%d",&a);
    if(a<0) {
       printf("Negative");
    }
    else if (a<1){
        printf("Neutral");
    }
    else {
        printf("Positive");
    }
    return 0;
}