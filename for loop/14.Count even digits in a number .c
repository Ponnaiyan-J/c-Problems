#include<stdio.h>
int main() {
    int n;int count=0;
    scanf("%d",&n);
    for(;n!=0;n/=10) {

        if (n%2==0) {
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}