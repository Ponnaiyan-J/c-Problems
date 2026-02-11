#include<stdio.h>
int main() {
    printf("System Access Control\n");
    int a,b;
    scanf("%d %d",&a,&b);
    switch (a) {
        case 1:
            printf("Full Access Anytime");
            break;
        case 2:
            if (b>=9 && b<=20)
                printf("Limited Access");

            else
                printf("Access Denied");
            break;
    }
}