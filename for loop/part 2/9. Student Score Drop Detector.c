#include<stdio.h>
int main() {
    int n,b;
    scanf("%d",&n);
    int sum=0;
    int count=0,div;
    for (int i=0;i<n;i++) {
        scanf("%d",&b);
        sum+=b;
        div=sum/n;
        if (b<40) {
            count++;
        }

    }
    printf("Average Score:%d\n",div);
    printf("Failed Subjects:%d",count);
    return 0;
}