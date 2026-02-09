#include<stdio.h>
int main(){
    int a,b;
    char o;
    scanf("%d %c %d",&a,&o,&b);
    switch (o){
        case '+':
            printf("Result=%d\n",a+b);
            break;
        case '-':
            printf("Result=%d\n",a-b);
            break;
        case '*':
            printf("Result=%d\n",a*b);
            break;
        case'%':
            printf("Result=%d\n",a%b);
            break;
        case '/':
        if (b!=0)
            printf("Result=%d\n",a/b);
        else
            printf("Cannot Divide By Zero");
        break;
    default:
        printf("Invalid Operator");
}
return 0;
}