#include<stdio.h>
int main() {
    int a,age;
    scanf("%d %d",&a,&age);
    int c=0;
    switch (a) {
        case 1:
            c=300;
            if(age<12) {
                c-=(0.50*c);
                break;
            }
            else if (age>=60) {
                c-=(0.33*c);
                break;
            }
        case 2:
            if(age<12) {
                c-=(0.50*c);
                break;
            }
            else if (age>=60) {
                c-=(0.33*c);
                break;
            }
    }
    printf("Fare Rs.%d",c);
}