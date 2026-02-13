#include<stdio.h>
int main() {
    int n,u;
    int sum=0;
    scanf("%d",&n);
    for (int i=0;i<n;i++) {
        scanf("%d",&u);
        sum+=u;
    }
    printf("Total Units:%d\n",sum);
    return 0;
}