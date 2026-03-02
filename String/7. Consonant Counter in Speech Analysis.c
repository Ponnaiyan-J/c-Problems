#include<stdio.h>
#include <string.h>
int main() {
    char str[100];
    fgets(str,sizeof(str),stdin);
    int len=strlen(str);
    int count=0,no=0;
    for (int i=0;i<len-1;i++) {
        if (str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'|| (str[i]<'9'&&str[i]>'0')) {
        no++;
        }

        else count++;
    }
    printf("%d",count);
}