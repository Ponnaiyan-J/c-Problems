#include<stdio.h>
#include <string.h>
int main() {
    char str[100];
    int count=-1;
    fgets(str,sizeof(str),stdin);
    char ch;
    scanf("%c",&ch);
    for (int i=0;str[i]!='\0';i++) {
        if (str[i]==ch) {
            count=i;
            break;
        }
    }
    printf("%d",count);
}