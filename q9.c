#include <stdio.h>

int main() {
    int i,j; 
    for ( i = 1; i <=4; i++) {
        for ( j = 1; j <=4; j++) {
            if (i == 1) {
                printf(" 1");
            } else if (i == 2) {
                printf(" 4");
            } else if (i == 3) {
                printf(" 9");
            }
             else if (i == 4) {
                printf("16");
            }
            }
        printf("\n");
        }
    }