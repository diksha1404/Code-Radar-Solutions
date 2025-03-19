// Your code here...
#include <stdio.h>

int main() {
    unsigned int number;
    scanf("%u", &number);
    if (number == 0) {
        printf("\n");
        return 0;
    }
    unsigned int mask = 1 << (sizeof(number) * 8 - 1); // Start with the most significant bit
    int leading_zero = 1; // Flag to skip leading zeros

    for (int i = sizeof(number) * 8 - 1; i >= 0; i--) {
        if ((number & mask) != 0) {
            printf("1");
            leading_zero = 0;
        } else if (!leading_zero) {
            printf("0");
        }
        mask >>= 1; // Shift the mask to the right to check the next bit
    }

    printf("\n");

    return 0;
}