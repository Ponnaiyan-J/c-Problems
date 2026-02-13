#include<stdio.h>
int main() {
    int n,b,i;
    int sum=0;int count=0;
    scanf("%d",&n);
    for (i=0;i<n;i++) {
        scanf("%d",&b);
        sum+=b;
    }
    if (sum<10000) {
        printf("Approved");
    }
    else
        printf("Limit Exceeded");
    return 0;
}