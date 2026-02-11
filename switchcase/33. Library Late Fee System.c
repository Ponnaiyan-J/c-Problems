 #include<stdio.h>
int main() {
    int booktype,dayslate,latefee=0;
    scanf("%d %d",&booktype,&dayslate);
    switch (booktype) {
        case 1:
            latefee=2;
            break;
        case 2:
            latefee=5;
            break;
    }
    if (dayslate) {
        latefee*=dayslate;
    }
    printf("LateFee=%dRs.",latefee);
    return 0;
}