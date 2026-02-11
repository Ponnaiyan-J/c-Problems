 #include<stdio.h>
int main() {
    int C,E,salary=0;
    scanf("%d %d",&C,&E);
    switch (C) {
        case 1:
            salary=50000;
            break;
        case 2:
            salary=35000;
            break;
    }

    if (E>=3) {
        salary+=E*5000;
    }
    printf("%d",salary);
    return 0;
}