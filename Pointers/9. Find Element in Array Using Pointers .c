#include <stdio.h>

int find(int *arr,int size, int *n) {
    int idx = -1;
    for (int i = 0; i < size; i++) {
        if (*(arr+i)==*n) {
            idx = i+1;
            break;
        }
    }
    return idx;
}
int main() {
    int size;
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    int n;
    scanf("%d", &n);
    int pos=find(&arr[0],size,&n);
    printf("%d\n", pos);
}