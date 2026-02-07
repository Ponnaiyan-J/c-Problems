#include<stdio.h>
int main(){
    int a,b;
    int q,r;
    scanf("%d %d",&a,&b);
    q=a/b;
    r=a%b;
    printf("Quotient=%d Reminder=%d",q,r);
    return 0;
}