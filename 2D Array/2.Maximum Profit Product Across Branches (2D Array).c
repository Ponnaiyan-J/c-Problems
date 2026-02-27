#include<stdio.h>
int main() {
    int c,r;
    scanf("%d %d",&c,&r);
    int arr[c][r];
    int a=0,b=0,d=0,e=0;
    for(int i=0;i<c;i++) {
        for(int j=0;j<r;j++) {
            scanf("%d",&arr[i][j]);
        }
    }
    int max,min;
    for(int i=0;i<c;i++) {
        for(int j=0;j<r;j++) {
            if (arr[i][j]>0) {
                max=arr[i][j];
                if (max>a){
                    a=max;
                }
                if (max>b && max!=a)
                    b=max;
            }
            if (arr[i][j]<0) {
                min=arr[i][j];
                if (min<d) {
                    d=min;
                }
                if (min<e && min!=d)
                    e=min;
            }
        }
    }
    int tot,tot2;
    tot=a*b;
    tot2=d*e;

    if (tot>tot2)
        printf("%d\n",tot);
    else if (tot2>tot)
        printf("%d\n",tot2);
    return 0;
}
