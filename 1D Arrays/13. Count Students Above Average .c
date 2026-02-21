#include<stdio.h>
int main() {
    int size;
    int sum=0,count=0;
    int total;
    scanf("%d",&size);
    int arr[size];

    for(int i=0;i<size;i++) {
        scanf("%d",&arr[i]);
    }
    for (int j=0;j<size;j++) {
        sum+=arr[j];
        total=sum/size;
    }
    for (int k=0;k<size;k++) {
        if(arr[k]>total) {
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}