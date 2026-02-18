#include<stdio.h>

int main() {
    int n,a;
    int sum=0,count=0,capacity,d,e;
    scanf("%d %d",&capacity,&n);
    int i=0;
    while (i<n) {
        scanf("%d",&a);
        sum+=a;

        d=capacity/10;
        e=d*9;

        if (sum>e)
            count++;

        i++;
    }
    printf("Final Occupied Beds:%d\n",sum);
    printf("Critical Hours:%d\n",count);

    return 0;
}