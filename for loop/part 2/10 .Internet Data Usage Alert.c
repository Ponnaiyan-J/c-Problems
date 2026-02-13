#include<stdio.h>
int main() {
    int n,b;
    scanf("%d",&n);
    int sum=0;
    int count=0;
    for (int i=0;i<n;i++) {
        scanf("%d",&b);
        sum+=b;
        if (b>2) {
            count++;
        }

    }
    printf("Total Data:%d\n",sum);
    printf("High Usage Days:%d",count);
    return 0;
}