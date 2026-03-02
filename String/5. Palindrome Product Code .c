#include<stdio.h>
#include<string.h>
int main() {
    char str[100];
    int len=0;
    int pal=1;
    scanf("%s",str);
    for(int i=0;str[len]!='\0';i++) {
        len++;
    }
    int j=len-1;
    for(int i=0;i<j;i++,j--) {
        if(str[i]!=str[j]) {
            pal=0;
            break;
        }
    }
    if(pal) {
        printf("palindrome");
    }
    else {
        printf("not palindrome");
    }
    return 0;
}