#include<stdio.h>
int main() {
    int n,m,sum=1;
    scanf("%d %d",&m,&n);
    for(int i=1;i<=n;i++) {
        sum*=m;
    }
    printf("%d\n",sum);
    return 0;
}