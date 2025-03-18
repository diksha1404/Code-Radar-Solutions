// Your code here...
#include <stdio.h>
int main() {
    int number;
    scanf("%d", &number);
    if (number == 0) {
        // printf("There is no set bit in zero.\n");
        return 0;
    }
    int lowestSetBit = number & -number;
    int position = 0;
    while (lowestSetBit > 1) {
        lowestSetBit >>= 1;  // Right shift the bit
        position++;          // Increment the position counter
    }
    printf("%d\n", position);

    return 0;
}