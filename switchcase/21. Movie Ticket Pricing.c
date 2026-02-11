#include<stdio.h>
int main() {
    printf("Movie Ticket Pricing\n");
    int a,b;
    scanf("%d %d",&a,&b);
    int c=0;
    switch (a) {
        case 1:
            c=150;
            if (b>=18)
                c+=50;
                break;
        case 2:
            c=250;
            if (b>=18)
                ;c+=50;
            break;
    }
    printf("Ticket Price.%d",c);
}