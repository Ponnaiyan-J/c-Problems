#include<stdio.h>
int main() {
    printf("Free Course(1)Rs.0\nPaid Course(2)Rs.500\n");
    int courseType;
    scanf("%d",&courseType);
    switch (courseType) {
        case 1:
            printf("Certificate Fee Rs.0");
            break;
        case 2:
            printf("Certificate Fee Rs.500");
            break;
        default:
            printf("Invalid Certificate Type");
    }
    return 0;
}