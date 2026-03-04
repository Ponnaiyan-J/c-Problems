#include<stdio.h>
#include <string.h>
int vowel(char str[]) {
    int len=strlen(str);
    char *p=str;
    int count=0;
    for(int i=0;i<len;i++) {
        *(p+i)=(str[i]);
        if (*(p+i)=='a' || *(p+i)=='e' || *(p+i)=='i' || *(p+i)=='o' || *(p+i)=='u' || *(p+i)=='A' || *(p+i)=='E' || *(p+i)=='I' || *(p+i)=='O' || *(p+i)=='U'){
            count++;
        }
    }
    return count;
}
int main() {
    char str[100];
    fgets(str, 100, stdin);
    int count=vowel(str);
    printf("%d",count);
    return 0;
}