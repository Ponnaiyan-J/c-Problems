#include<stdio.h>
int main() {
    int n,b;
    scanf("%d",&n);
    int sum=0;
    int count=0;
    for (int i=0;i<n;i++) {
        scanf("%d",&b);
        sum+=b;

        if (b>50) {
            count++;
        }

    }
    printf("Total Errors:%d\n",sum);
    printf("Critical Hours:%d",count);
    return 0;
}