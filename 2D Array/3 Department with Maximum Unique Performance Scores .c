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
int a=0;
    for (int i=0;i<c;i++) {
        int count =0;
        for (int j=0;j<r;j++) {
            int uncount=0;
            int element = arr[i][j];
            for (int k=0;k<c;k++) {
                if (element != arr[i][k]) {
                    uncount++;
                }
            }
            if (uncount>count) {
                count=uncount;
                a=i;
            }
        }
    }
    printf("%d\n",a);
    return 0;
}