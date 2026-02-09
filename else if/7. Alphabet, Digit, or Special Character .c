#include<stdio.h>
int main() {
    printf("Check Alphabet, Digit, or Special Character\n");
    char ch;
    scanf("%c",&ch);
    if ((ch>='A' && ch<='z')||(ch>='a' && ch<='z')){
        printf("Alphabet");
    }
    else if (ch>='0' && ch<='9'){
        printf("Digit");
    }
    else {
        printf("Special Character");
    }