#include<stdio.h>
#include<string.h>
int main() {
    char str[20];
    scanf("%s",str);
    int uc=0;
    for(int i=0;str[i]!='\0';i++) {
        if (str[i]>='A'&& str[i]<='Z') {
            uc=1;
            break;
        }
    }
    if(uc) {
        printf("valid");
    }
        else {
            printf("invalid");
        }

    return 0;

}S