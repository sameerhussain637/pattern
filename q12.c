#include <stdio.h>
int main() {
    int rows=3, i, j;
    // printf("Enter the number of rows for the pyramid: ");
    // scanf("%d", &rows);
    for (i = 1; i <= rows; i++) {
        // Print spaces
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
}
