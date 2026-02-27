#include<stdio.h>
int main() {
    int c,r;
    scanf("%d %d",&c,&r);
    int arr[c][r];
    for (int i=0;i<c;i++) {
        for(int j=0;j<r;j++) {
            scanf("%d",&arr[i][j]);
        }
    }
    int sum=0;
    int avg;
    int y;
    for (int i=0;i<c;i++) {
        int sum2=0;
        for(int j=0;j<r;j++) {
            sum2+=arr[i][j];
        }
        avg=sum2/c;
        sum=avg;
        if (avg<sum)
            sum=avg;
        y=i;
    }
    printf("%d\n",sum);
        printf("%d\n",y);
        return 0;
}