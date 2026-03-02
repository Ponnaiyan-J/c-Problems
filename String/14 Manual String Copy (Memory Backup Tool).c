#include<stdio.h>
#include <string.h>
int main() {
    char str[100];
    fgets(str,sizeof(str),stdin);
    int len=strlen(str)-1;
    char strcp[len];
    for (int i=0;str[i]!='\0';i++) {
        strcp[i]=str[i];
        }
    printf("%s",strcp);
}