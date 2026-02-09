#include<stdio.h>
int main() {
    printf("Type of Triangle\n");
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if (a==b && b==c){
        printf("Equilateral Triagle");
    }
    else if (a==b || b==c|| a==c){
        printf("Isosceles Triagle");
    }
    else {
        printf("scalene Triangle");
    }