#include<stdio.h>
int main() {
    int n,b;
    scanf("%d",&n);
    int min=1000000000;
    int count=0;
    for (int i=0;i<n;i++) {
        scanf("%d",&b);
        if (b<min) {
            min=b;
        }
        if (b<210) {
            count++;
        }

    }
    printf("Minimum Voltage:%d\n",min);
    printf("Low Voltage Events:%d",count);
    return 0;
}