#include<stdio.h>
int main() {
    int a;
    scanf("%d",&a);
   if (a<20){
       printf("Cold");
   }
   else if (a<30) {
        printf("Normal");
    }
   else {
       printf("Hot");
   }
    return 0;