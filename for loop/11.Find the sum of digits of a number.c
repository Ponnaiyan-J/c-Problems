#include<stdio.h>
int main() {
    int n;int sum=0,b;
    scanf("%d",&n);
    for(;n!=0;n/=10) {
        b=n%10;
        sum+=b;
        }
    printf("%d\n",sum);
    return 0;
}