#include<stdio.h>

int main() {
    int n,a;
    int success=0,failed=0;
    scanf("%d",&n);
    int i=0;
    while (i<n) {
        scanf("%d",&a);
        int status;

        if (a==1) {
            success++;
        }
        else if (a==0){
            failed++;
        }

        i++;
    }
    printf("Successful:%d\n",success);
    printf("Cancelled:%d\n",failed);

    if (success>failed) {
        printf("status:safe");
    }
    else if (success==failed) {
        printf("status:safe");
    }
    else {
        printf("status:risk");
    }

    return 0;
}