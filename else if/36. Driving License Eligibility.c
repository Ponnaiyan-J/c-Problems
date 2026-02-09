#include<stdio.h>
int main() {
    printf("Driving Licience Eligibility");
    int age;
    scanf("%d",&age);
   if (age<=18){
       printf("Not Eligble");
   }
   else if (age<=70) {
       printf("Eligble");
   }
   else {
       printf("Not Eligible");
   }
    return 0;
}