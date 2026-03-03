#include<stdio.h>
int tot(int a){
    int sum=0;
    for(;a!=0;a/=10) {
        sum+=a%10;
    }
    return sum;
}

int main() {
    int a;
    scanf("%d",&a);
    int sum=tot(a);
    printf("%d\n",sum);
}