#include<stdio.h>
int main() {
    int c,r;
    scanf("%d %d",&c,&r);
    int arr[c][r];
    for (int i=0;i<c;i++) {
        for(int j=0;j<r;j++) {
            scanf("%d",&arr[i][j]);
        }
    }
    int even=0,odd=0;
    int count=0;
    for (int i=0;i<c;i++) {
        for (int j=0;j<r;j++) {
            if(arr[i][j]%2==0) {
                even++;
            }
            else {
                odd++;
            }
        }
        if (even==odd) {
            count++;
        }
    }

    printf("%d\n",count);
        return 0;
}