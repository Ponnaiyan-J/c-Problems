#include<stdio.h>
int main() {
    printf("Login Role Identification\n");
    int a;
    scanf("%d",&a);
    if(a<=1) {
       printf("Admin");
    }
    else if (a<=2) {
       printf("User");
    }
    else {
        printf("Guest");
    }
    return 0;
}