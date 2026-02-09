#include<stdio.h>
int main() {
    printf("Smallest Using Ternary Operator\n");
    int a,b;
    scanf("%d %d",&a,&b);
    if (a?b && a:b){
        printf("%d is smallest",a);
    }
    else {
        printf("%d is smallest",b);
    }
    return 0;
}