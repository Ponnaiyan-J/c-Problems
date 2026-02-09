#include<stdio.h>
int main() {
    char ch;
    scanf("%c",&ch);
        if (ch>='A' && ch<='Z') {
            printf("Upper Case");
    }
    else if (ch>='a' && ch<='z') {
        printf("Lower case");
    }
    else {
        printf("other");
    }
    return 0;