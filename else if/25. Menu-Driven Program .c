#include<stdio.h>
int main(){
    int a,b,choice;
    scanf("%d",&choice);
    scanf("%d %d",&a,&b);

    switch (choice){
        case 1:
            printf("sum=%d",a+b);
            break;
        default:
            printf("Invalid choice");
    }
    return 0;
}