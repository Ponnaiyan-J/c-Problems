#include<stdio.h>
int main() {
    printf("General (1)\nOBC (2)\nSC/ST (3)\n");
    int category;
    scanf("%d",&category);
    switch (category) {
        case 1:
            printf("Exam Fee Rs.1200");
            break;
        case 2:
            printf("Exam Fee Rs.800");
            break;
        case 3:
            printf("Exam Fee Rs.500");
            break;
    }
    return 0;
}