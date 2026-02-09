#include<stdio.h>
int main() {
    printf("Vowel or Consonant\n");
    char ch;
    scanf("%c",&ch);
    if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U') {
       printf("Vowels");
    }
    else {
        printf("Consonant");
    }
    return 0;
}