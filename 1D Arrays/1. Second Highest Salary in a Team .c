#include<stdio.h>
int main() {
    int size,temp=0;
    scanf("%d",&size);
    int arr[size];

    for(int i=0;i<size;i++) {
        scanf("%d",&arr[i]);
    }
    int a=arr[0];
    for (int j=1;j<size;j++) {
        if (arr[j]>a) {
            a=arr[j];
        }
    }
    int b=arr[0];
    for (int k=1;k<size;k++) {
        if (arr[k]>b && arr[k]!=a) {
            b=arr[k];
        }
    }

    printf("Second highest salary:%d\n",b);

    return 0;

}