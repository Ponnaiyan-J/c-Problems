#include<stdio.h>

int main() {
    int n,a,b=0;
    int count=0;
    scanf("%d",&n);
    int i=0;
    int sum=0;
    while (i<n) {
        scanf("%d",&a);


        if (a==0) {
            count++;
            b=count;
        }
        else {
            count=0;
        }
        i++;
    }
    printf("Longest Failure Streak:%d",b);

    return 0;
}