#include<stdio.h>
int main() {
    int n,a;
    int t=0,count=0;
    scanf("%d",&n);

    int i=0;
    while (i<n) {
        scanf("%d",&a);

        if (a==0) {
            count++;
        }
        else {
            count=0;
        }

        if (t<count)
            t=count;
        
        i++;

    }
    printf("Longest Default Streak:%d\n",t);
    return 0;
}