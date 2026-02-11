#include<stdio.h>
int main() {
    printf("General Physician(1)-Rs.500 \n Specialist(2)-Rs.1200\n");
    int doctortype;
    scanf("%d",&doctortype);
    switch (doctortype) {
        case 1:
            printf("Consultation Fee Rs.500");
            break;
        case 2:
            printf("Consultation Fee Rs.1500");
            break;
        default:
            printf("Invalid doctortype");
    }
    return 0;
}