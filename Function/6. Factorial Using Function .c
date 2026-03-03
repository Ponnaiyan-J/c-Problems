#include<stdio.h>
int tot(int a){
    int fact=1;
    for(int i=a;i>0;i--) {
        fact*=i;
    }
    return fact;
}

int main() {
    int a;
    scanf("%d",&a);
    int fact=tot(a);
    printf("%d\n",fact);
}