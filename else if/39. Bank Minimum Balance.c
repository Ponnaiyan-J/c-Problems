#include<stdio.h>
int main() {
    printf("Bank Minimum Balance\n");
    int a;
    scanf("%d",&a);
   if (a<100){
       printf("Low Balance");
   }
   else {
       printf("Sufficient Balance");
   }
    return 0;
}