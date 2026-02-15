#include<stdio.h>
int main() {
    int a,prime=0;
    scanf("%d",&a);
    for(int i=2;i<=a;i++) {
        int count=0;
        for (int j=1;j<=i;j++) {
            if (i%j==0) {
                count++;
            }
        }
        if (count==2) {
            prime++;
        }
    }
    printf("%d\n",prime);
    return 0;
}