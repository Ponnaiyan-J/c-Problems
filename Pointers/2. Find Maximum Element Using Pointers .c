#include<stdio.h>
int max(int arr[],int n) {
    int *p=&arr[0];
    int max=*p;

    for (int i=0;i<n;i++) {
        if (*(p+i)>max) {
            max=*(p+i);
        }
    }
    return max;
}
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    int a=max(arr,n);
        printf("%d\n",a);
        return 0;
    }