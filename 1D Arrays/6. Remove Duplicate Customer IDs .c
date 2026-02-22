#include<stdio.h>
int main() {
    int cus;
    scanf("%d",&cus);
    int arr[cus];
    for(int i=0;i<cus;i++) {
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<cus;i++) {
        for (int j=i+1;j<cus;j++) {

            if (arr[i]==arr[j])
            arr[j]=0;
        }
    }
    for (int i=0;i<cus;i++) {

        if(arr[i]!=0)
            printf("%d",arr[i]);
    }
}
