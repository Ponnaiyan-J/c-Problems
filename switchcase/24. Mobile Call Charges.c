#include<stdio.h>
int main() {
    printf("Local (1)\nSTD (2)\nISD (3)\n");
    int calltype,m;
    scanf("%d %d",&calltype,&m);
    switch (calltype) {
        case 1:
            m*=1;
            break;
        case 2:
            m*=3;;
            break;
        case 3:
            m*=10;
            break;
    }
    printf("call charges Rs.%d\n",m);
    return 0;
}