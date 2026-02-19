#include<stdio.h>
int main(){
    int n,x,count=0;
    scanf("%d %d",&n,&x);
    int marks[n];

    for(int i=0;i<n;i++) {
        scanf("%d",marks[i]);
    }
    for(int i=0;i<n;i++) {
        if(marks[i]==x) {
            count++;
        }
    }
    printf("%d",count);
    return 0;

}