#include <stdio.h>
#include <limits.h>
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    int arr[a][b];
    for (int i=0;i<a;i++) {
        for (int j=0;j<b;j++)
            scanf("%d",&arr[i][j]);
    }
    int index=0;
    int max=INT_MIN;
    for (int i=0;i<a;i++) {
        int prod=arr[i][0];
        for (int j=1;j<b;j++)
            prod=prod*arr[i][j];
        if (max<prod) {
            max=prod;
            index=i;
        }
    }
    printf("%d\n",index);
}