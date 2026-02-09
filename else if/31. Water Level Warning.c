#include<stdio.h>
int main() {
    printf("Water Level Warning\n");
    int a;
    scanf("%d",&a);
    if(a<90) {
       printf("Safe Water");
    }
    else {
       printf("Over Flow");
    }
    return 0;
}