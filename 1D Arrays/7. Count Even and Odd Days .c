#include<stdio.h>
int main() {
    int size;
    scanf("%d",&size);
    int arr[size];

    for(int i=0;i<size;i++) {
        scanf("%d",&arr[i]);
    }
    int odd=0,even=0;
    for (int j=0;j<size;j++) {
        if (arr[j]%2!=0) {
            odd++;
        }
        if (arr[j]%2==0) {
            even++;
        }
    }
    printf("odd:%d \n",odd);
    printf("even:%d \n",even);
    
    return 0;

}