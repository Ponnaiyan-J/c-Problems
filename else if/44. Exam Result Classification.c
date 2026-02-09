#include<stdio.h>
int main() {
    printf("Exam Result Classification\n");
    int a;
    scanf("%d",&a);
    if(a<55) {
       printf("Fail");
    }
    else if (a<85) {
       printf("pass");
    }
    else {
        printf("Distinction");
    }
    return 0;