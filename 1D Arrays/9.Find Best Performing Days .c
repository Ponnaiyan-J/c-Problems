#include <stdio.h>
int main() {
    int size;
    scanf("%d", &size);
    int arr[size];
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    int max[size];
    for(int i = 0; i < size; i++) {
        for (int j=i+1; j < size; j++) {
            if (arr[i]>arr[j]) {
                max[i]=arr[i];
            }else {
                max[i]=0;
                break;
            }
        }
    }
    max[size-1]=arr[size-1];
    for (int i=0;i<size;i++) {
        if (max[i]>0)
            printf("%d ", max[i]);
    }
}