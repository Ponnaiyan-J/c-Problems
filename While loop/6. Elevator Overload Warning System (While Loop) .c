#include<stdio.h>

int main() {
    int n,a;
    int sum=0,maxWeight,count=0;
    scanf("%d %d",&maxWeight,&n);
    int i=0;
    while (i<n) {
        scanf("%d",&a);
        sum+=a;

        if (sum<maxWeight)
            count++;

        i++;
    }
    printf("Passengers Allowed:%d\n",count);

    if (sum>maxWeight) {
        printf("Overload: Yes");
    }

    else {
        printf("Overload: No");
    }

    return 0;
}