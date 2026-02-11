#include<stdio.h>
int main() {
    int accountType,balance,wdrAmount;
    scanf("%d %d %d",&accountType,&balance,&wdrAmount);
    switch (accountType) {
        case 1:
            if(balance>=wdrAmount) {
                printf("Transaction Successfull");
                break;
            }
            else
                printf("Limit Exceeded");
            break;
        case 2:
            if(balance<5000) {
                printf("Transaction Successfull");
                break;
            }
            else
                printf("Limit Exceeded");
            break;
    }
}