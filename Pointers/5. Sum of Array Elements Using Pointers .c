#include<stdio.h>
int tot(int *arr,int n) {
    int sum=0;
    for (int i=0;i<n;i++) {
        sum+=*(arr+i);
    }
    return sum;
}
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    int b;
    for (int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    int sum=tot(&arr[0],n);
    printf("%d\n",sum);
}