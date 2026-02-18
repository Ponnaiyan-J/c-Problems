#include<stdio.h>
int main() {
    int n,a,fuel;
    int d;
    scanf("%d %d",&fuel,&n);
    int count=0,sum=0;
    int i=0;
    while (i<n) {
        scanf("%d",&a);
        sum+=a;

        if (sum>fuel) {
            sum-=a;
            break;
        }
        count++;
        d=fuel-sum;

        i++;
    }
    printf("Completed Trips:%d\n",count);
    printf("Remaining Fuel:%d\n",d);
    return 0;
}