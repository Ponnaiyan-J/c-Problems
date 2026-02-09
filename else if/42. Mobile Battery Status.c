#include<stdio.h>
int main() {
    printf("Mobile Battery Status\n");
    int a;
    scanf("%d",&a);
    if(a<20) {
       printf("Low Battery");
    }
    else {
       printf("Battery Ok");
    }
    return 0;
}