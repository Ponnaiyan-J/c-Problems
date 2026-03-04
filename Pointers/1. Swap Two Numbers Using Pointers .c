#include<stdio.h>

void swap(int *p,int *q){
    int temp=*p;
    *p=*q;
    *q=temp;
    printf("After swapping\n");
}
int main() {
    int a,b;
    scanf("%d%d",&a,&b);
    printf("Before Swap\n%d %d\n",a,b);
    swap(&a,&b);
    printf("%d %d",a,b);
}