#include<stdio.h>
int find(int a) {
    int rev=0;
    for (;a!=0;){
        int b=a%10;
        rev=rev*10+b;
        a/=10;
    }
    return rev;
}
int main() {
    int a;
    scanf("%d",&a);
    int rev=find(a);
    printf("%d",rev);
}