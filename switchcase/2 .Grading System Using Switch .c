#include<stdio.h>
int main() {
    printf("Grade\n");
    int marks;
    int grade;
    scanf("%d",&marks);
    grade =marks/10;
    switch (grade) {
        case 10:
        case 9:
            printf("Grade A");
            break;
        case 8:
            printf("Grade B");
            break;
        case 7:
            printf("Grade C");
            break;
        case 6:
            printf("Grade D");
            break;
        case 5:
            printf("Grade E");
            break;
        case 4:
            printf("Grade F");
            break;
        case 3:
            if (marks>=31 && marks<=39)
            printf("Grade Supplementary");
            else
                printf("Fail");
            break;
        default:
            printf("Fail");
    }
    return 0;
}