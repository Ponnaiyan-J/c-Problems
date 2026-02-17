#include<stdio.h>
int main() {
    for(int i=1;i<=5;i++) {
        for (int j=1;j<=i;j++) {
            if (j==i || (j-i)%2==0)
                printf("%d",1);
            else
                printf("%d",0);
        }
        printf("\n");
    }
    return 0;
}