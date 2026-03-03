#include<stdio.h>

float cArea(int a){
    return(3.14 * a * a);
}

int main() {
    int a;
    scanf("%d",&a);
    float find=cArea(a);
    printf("%.2f",find);
}