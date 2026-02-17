#include<stdio.h>

int main() {
   int n,m;
    int count=0;
    int max=0,b=0;
    scanf("%d",&n);
    int i=1;
    while (i<=n) {
        scanf("%d",&m);
        if (m>70) {
            count++;
            max++;
            if (max>b)
                b=max;
        }
        else {
            max=0;
        }
        i++;
    }
    printf("Noise Violations :%d\n",count);
    printf("Longest Violation Streak :%d\n",b);
    return 0;
}