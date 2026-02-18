#include<stdio.h>
int main() {
    int n,m,cash,wdl;
    scanf("%d %d",&cash,&n);
    int count=0,sum=0,rem=0;
    int i=0;
    while (i<n) {
        scanf("%d",&wdl);
        cash-=wdl;

        if (cash<0) {
            cash+=wdl;
            break;
        }
        count++;
        i++;
    }
    printf("Successful Withdrawals:%d\n",count);
    printf("Remaining Cash:%d\n",cash);

    return 0;
}