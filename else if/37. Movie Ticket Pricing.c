#include<stdio.h>
int main() {
    printf("Movie Ticket Pricing\n");
    int a;
    scanf("%d",&a);
   if (a<12){
       printf("Discount");
   }
   else {
       printf("Regular Ticket");
   }
    return 0;
}