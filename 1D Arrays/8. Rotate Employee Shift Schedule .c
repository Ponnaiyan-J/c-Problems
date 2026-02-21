#include<stdio.h>
int main() {
    int size;
    scanf("%d",&size);
    int arr[size];

    for(int i=0;i<size;i++) {
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    for (int j=k;j<size;j++) {
        printf("%d\n",arr[j]);
    }
    for (int l=0;l<k;l++) {
        printf("%d\n",arr[l]);
    }
    return 0;

}