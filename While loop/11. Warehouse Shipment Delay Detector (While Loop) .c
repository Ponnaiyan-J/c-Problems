#include<stdio.h>
int main() {
    int n,a;
    scanf("%d",&n);
    int count=0,sum=0;
    int i=0;
    while (i<n) {
        scanf("%d",&a);
        sum+=a;

        if (a>2) {
            count++;
        }


        i++;

    }
    printf("Total Delay:%d\n",sum);
    printf("Delayed Days:%d\n",count);

    return 0;
}