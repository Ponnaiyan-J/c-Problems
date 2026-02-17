#include<stdio.h>

int main() {
    int n,t;
    int tData,usage;
    int count=0;
    scanf("%d %d",&n,&tData);
    int i=0;
    int sum=0;
    while (i<tData) {
        scanf("%d",&usage);


        if (usage>=2) {
            count++;

            sum+=usage;
            t=n-sum;
            if (t<0) {
                t=0;
            }
        }
        i++;
    }
    printf("Days Used:%d\n",count);
    printf("Remaining Data:%dGB\n",t);

    return 0;
}