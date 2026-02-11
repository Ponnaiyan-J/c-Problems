#include<stdio.h>
int main() {
    printf("Single (1)-Rs.80,000\nDouble (2)-Rs.60,000\nTriple (3)-Rs.45,000\n");
    int roomtype;
    scanf("%d",&roomtype);
    switch (roomtype) {
        case 1:
            printf("Hostel Fee Rs.80,000");
            break;
        case 2:
            printf("Hostel Fee Rs.60,000");
            break;
        case 3:
            printf("Hostel Fee Rs.45,000");
            break;
    }
    return 0;
}