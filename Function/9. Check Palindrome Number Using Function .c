#include<stdio.h>
int reverse(int a) {
    int rev=0;
    for (;a!=0;){
        int b=a%10;
        rev=rev*10+b;
        a/=10;
    }
    return rev;
}
int pal(int a) {
    int rev=reverse(a);
    if (rev==a) {
        printf("Palindrome");
    }
    else {
        printf("Not Palindrome");
    }
}
int main() {
    int a;
    scanf("%d",&a);
    pal(a);
}