#include<stdio.h>
int main() {
    int n,b;
    scanf("%d",&n);
    int sum=0;
    int count=0;
    for (int i=0;i<n;i++) {
        scanf("%d",&b);

        if (b>sum) {
            sum=b;
        }

        if (b>100) {
            count++;
        }

    }
    printf("Highest Price:%d\n",sum);
    printf("High Price Days:%d",count);
    return 0;
}