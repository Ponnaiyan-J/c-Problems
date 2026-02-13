#include<stdio.h>
int main() {
    int a,n,b;
    scanf("%d %d",&a,&n);
    int sum=0,total=0;
    for (int i=0;i<n;i++) {
        scanf("%d",&b);
        sum+=b;
        total=a-sum;
    }
    printf("Remaining Battery:%d %% \n",total);
    return 0;
}