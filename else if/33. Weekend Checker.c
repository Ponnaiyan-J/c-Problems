#include<stdio.h>
int main() {
    int a;
    scanf("%d",&a);
   if (a<=5){
       printf("Weekday");
   }
   else if (a<=7) {
       printf("Weekend");
   }
    return 0;
}