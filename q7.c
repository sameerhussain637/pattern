#include <stdio.h>
int main() {
    int num = 1;
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= 4; j++) {
            printf("%2d ", num++); // in this 2 is use for to take a 2digit space because of 11 to 16 value 
        }
        printf("\n");
    }

    return 0;
}
