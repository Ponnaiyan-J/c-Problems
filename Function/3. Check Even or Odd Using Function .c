#include<stdio.h>

int oddeven(int a){
    if (a%2==0) {
        printf("even");
    }
    else if (a%2==1) {
        printf("odd");
    }
}

int main() {
    int a;
    scanf("%d",&a);
    oddeven(a);
}