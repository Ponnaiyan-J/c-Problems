#include <stdio.h>
#include <string.h>

void Con(char *str1, char *str2, char *constr) {
    int i=0;
    for (int j=0; j<strlen(str1)-2; j++) {
            *(con+(i++))=*(str1+j);
    }
    for (int j=0; j<strlen(str2); j++) {
            *(con+(i++))=*(str2+j);
    }
    *(con+i)='\0';
    printf("%s", con);
}
int main() {
    char str1[50];
    fgets(str1, 50, stdin);
    char str2[50];
    fgets(str2, 50, stdin);
    char str[100];
    Con(&str1[0], &str2[0], &str[0]);
}