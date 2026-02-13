#include<stdio.h>
int main() {
    int sly,a;
    scanf("%d %d",&sly,&a);
    for (int i=0;i<a;i++) {
        sly-=100;
    }
    printf("Final Salary:%d\n",sly);
    return 0;
}