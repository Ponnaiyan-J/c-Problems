#include<stdio.h>
int tot(int a) {
    int sum=0;
    for (int i=0;i<=a;i++){
        sum=sum+i;
    }
    return sum;
}

int main() {
    int a;
    scanf("%d",&a);
    int sum=tot(a);
    printf("%d",sum);
}