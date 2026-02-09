#include<stdio.h>
int main() {
    printf("Scholarship Eligibility\n");
    int marks,income;
    scanf("%d %d",&marks,&income);
   if (marks>85==income<300000) {
       printf("Eligible");
   }
   else {
       printf("Not Eligible");
   }
    return 0;
}