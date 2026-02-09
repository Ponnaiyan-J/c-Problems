#include<stdio.h>
int main() {
    printf("Exam Attendance Eligibility\n");
    int a;
    scanf("%d",&a);
   if (a<75){
       printf("Not Eligible Exam");
   }
   else {
       printf("Eligible Exam");
   }
    return 0;
}