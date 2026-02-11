#include<stdio.h>
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    switch (a) {
        case 1:
            printf("Interest 4%%");
            break;
        case 2:
            if (b<=3) {
                printf("Interest 5%%");
            }
            else if (b>=3) {
                printf("Interest 7%%");
            }
    }
}