#include<stdio.h>
int main() {
    int n;
    int found=0;
    scanf("%d",&n);
    int price[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&price[i]);
    }
    int a=999999999;
    for (int j=0;j<n;j++) {
        if ( price[j]>0 && price[j]<a) {
            a=price[j];
            found=1;
        }
    }
         if (found)
             printf("%d",a);
        else
            printf("No Positive");

    return 0;
}