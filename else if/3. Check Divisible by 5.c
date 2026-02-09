#include<stdio.h>
int main() {
    int num;
    scanf("%d",&num);
   if (num%5==0) {
       printf("Divisible by 5");
   }
    else {
        printf("Not divisile by 5");
    }
    return 0;
}