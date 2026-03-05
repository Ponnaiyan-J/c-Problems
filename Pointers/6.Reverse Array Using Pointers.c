#include<stdio.h>
void tot(int *arr,int n) {
    int arr2[n];
    int j=n-1;
    for (int i=0;i<n;i++) {
        arr2[j--]=*(arr+i);
        }
    for (int i=0;i<n;i++) {
        printf("%d ",arr2[i]);
    }
    }
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    tot(&arr[0],n);
}