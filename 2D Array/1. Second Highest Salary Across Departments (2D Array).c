#include<stdio.h>
int main() {
    int c,r;
    scanf("%d %d",&c,&r);
    int arr[c][r];
    for(int i=0;i<c;i++) {
        for(int j=0;j<r;j++) {
            scanf("%d",&arr[i][j]);
        }
    }
    int max=0;
    for(int m=0;m<c;m++) {
        for(int n=0;n<r;n++) {
            if (arr[m][n]>max)
                max=arr[m][n];
        }
    }
    int Smax=0;
    for(int k=0;k<c;k++) {
        for(int l=0;l<r;l++) {
            if ( arr[k][l]>Smax && arr[k][l]!=max)
                Smax=arr[k][l];
        }
    }
    printf("\n %d",Smax);
    return 0;
}