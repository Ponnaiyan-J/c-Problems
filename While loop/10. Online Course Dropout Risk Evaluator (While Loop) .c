#include<stdio.h>
int main() {
    int n,h;
    scanf("%d",&n);
    int count=0,a=0;
    int i=0;
    while (i<n) {
        scanf("%d",&h);

        if (h==0) {
            count++;
        }
        else {
            a++;
        }
        i++;

    }
    printf("Inactive Weeks:%d\n",count);

    if (a==count) {
        printf("Risk Status: High");
    }
    else if (a>count) {
        printf("Risk Status: Low");
    }
    else {
        printf("Risk Status: High");
    }

    return 0;
}