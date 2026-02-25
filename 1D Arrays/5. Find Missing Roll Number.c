#include<stdio.h>
int main() {
    int mis;
    scanf("%d",&mis);
    int arr[mis];
    for(int i=0;i<mis-1;i++) {
        scanf("%d",&arr[i]);
    }
    int sum=0;
    int sub=0;
    int tot;
    for (int i=0;i<mis-1;i++) {
        sum=sum+arr[i];
        sub=mis*(mis+1)/2;
    }
    tot=sub-sum;
    printf("%d",tot);
}
