// Your code here...
#include <stdio.h>

int main() {
    unsigned int number;
    scanf("%u", &number);
//     unsigned int flipped_number = ~number;
//     printf("%u",flipped_number);
//     return 0;
// } 

    unsigned int flipped_number = ~number;

   
    printf("%u\n", number);
    printf("%u\n", flipped_number);

    return 0;
}