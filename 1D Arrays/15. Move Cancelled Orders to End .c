#include<stdio.h>
int main() {
    int order;
    int found,total;
    scanf("%d",&order);
    int arr[order];
    int arr2[order];
    for(int i=0;i<order;i++) {
        scanf("%d",&arr[i]);
        arr2[i]=0;
    }
    int sum=0;
    for (int j=0;j<order;j++) {
        if (arr[j]>0)
            arr2[sum++]=arr[j];
    }

        for (int k=0;k<order;k++) {
            printf("%d",arr2[k]);
        }
    return 0;
}