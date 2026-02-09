#include<stdio.h>
int main() {
    int pass;
    scanf("%d",&pass);
   if (pass>8){
       printf("Strong password");
   }
   else {
       printf("Weak Password");
   }
    return 0;
}