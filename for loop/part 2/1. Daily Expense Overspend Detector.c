#include<stdio.h>
int main() {
    int n,b,i;
    int count=0;
    int sum=0;
    scanf("%d",&n);
    for (i=0;i<n;i++) {
        scanf("%d",&b);
        sum+=b;
        if (b>1000) {
            count++;
        }

    }
    printf("Total Expence %d\n",sum);
    printf("Overspend days %d",count);
    return 0;
}