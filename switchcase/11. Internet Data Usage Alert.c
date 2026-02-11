#include<stdio.h>
int main() {
    printf("Internet Data Usage Alert\n");
    int a;
    float d;
    scanf("%d %c",&a,&d);
    switch (a) {
        case 1:
            if (d<=1) {
                printf("Normal Speed");
                break;
            }
            else
                printf("Speed Reduced");
            break;

        case 2:
            if (d<=2) {
                printf("Normal Speed");
                break;
            }
            else
                printf("Extra Charges Applied");
            default:
            printf("Extra Charges Applied");
            }


    }