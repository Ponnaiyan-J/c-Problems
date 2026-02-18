#include<stdio.h>
int main() {
    int n,a;
    scanf("%d",&n);
    int count=0,sum=0,max=0;
    int i=0;
    while (i<n) {
        scanf("%d",&a);
        sum+=a;

        if (max<a) {
            max=a;
        }

        if (a>5) {
            count++;
        }


        i++;

    }
    printf("Max Usage:%d\n",max);
    printf("Surge Hours:%d\n",count);

    return 0;
}