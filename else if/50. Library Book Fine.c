#include<stdio.h>
int main() {
    printf("Library Book Fine\n");
    int a;
    scanf("%d",&a);
    if(a<7) {
       printf("No Fine");
    }
    else {
        printf("Fine Applied");
    }
    return 0;
}