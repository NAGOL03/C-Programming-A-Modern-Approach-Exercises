#include <stdio.h>
#include <stdbool.h>

void generateLine(int space, bool newLine) {
    for (int i = 0; i <= space; i++) {
        printf(" ");
    }
    if (newLine) {
        printf("*\n");
    } else {
        printf("*");
    }
}

int main(void) {
    // Line 1
    generateLine(7, true);
    // Line 2
    generateLine(6, true);
    // Line 3
    generateLine(5, true);
    // Line 4
    generateLine(0, false);
    generateLine(2, true);
    // Line 5
    generateLine(1, false);
    generateLine(0, true);
    // Line 6
    generateLine(2, true);
    return 0;
}