/*#include<stdio.h>
int main() {
    int n,sum;
    scanf("%d",&n);
    for (int i=1;i<=n;i++) {
        if (sum=i%2==0) {
            sum+=2;
        }
        sum;
        printf("%d\n",sum);
    }
    return 0;
}*/
#include<stdio.h>
int main() {
    printf("Water Bill Calculation\n");
    int a,u;
    scanf("%d %d",&a,&u);
    switch (a) {
        case 1:
            if (u<=30) {
                u*=5;
            }
            else if (u>30){
                u=(30*5)+(u-30)*8;
                u-=10;
            }
            break;
        case 2:
            if (u){
                u*=10;
                break;
            }
    }
    printf("Bill Rs.%d",u);
}