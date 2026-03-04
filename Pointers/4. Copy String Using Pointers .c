#include<stdio.h>
#include <string.h>
void copy(char *str,char *str2) {
    int len=strlen(str);
    for(int i=0;i<len;i++) {
        str2[i]=str[i];
    }
    str2[len]='\0';
    printf("%s",str2);
}


int main() {
    char str[100];
    fgets(str, 100, stdin);
    char str2[100];
    copy(&str[0],&str2[0]);
    return 0;
}