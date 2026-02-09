#include<stdio.h>
int main() {
    printf("Air Conditioner Mode\n");
    int a;
    scanf("%d",&a);
    if(a<=18) {
       printf("Heating Mode");
    }
    else if (a<=35) {
       printf("Normal Mode");
    }
    else {
        printf("Cooling Mode");
    }
    return 0;
}