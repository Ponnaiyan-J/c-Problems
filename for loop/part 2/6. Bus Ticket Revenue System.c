#include<stdio.h>
int main() {
    int n,b;
    scanf("%d",&n);
    int sum=0;
    for (int i=0;i<n;i++) {
        scanf("%d",&b);
        sum+=b;
    }
    printf("Total Collection: Rs.%d\n",sum);
    return 0;
}