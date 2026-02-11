#include<stdio.h>
int main() {
    printf("Loan Approval System\n");
    int a,score;
    scanf("%d %d",&a,&score);
    switch (a) {
        case 1:
            if (score>=700) {
                printf("Approved");
                break;
            }
            else if (score>650 && score<699) {
                printf("Manual Review");
                break;
            }
        case 2:
            if (score>=700) {
                printf("Approved");
                break;
            }
            else if (score<700) {
                printf("Rejected");
                break;
                default:
                printf("Invalid Fee");
            }
    }
}