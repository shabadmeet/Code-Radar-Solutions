#include <stdio.h>

int main() {
    int num, binary[32], i = 0;

    scanf("%d", &num);

    if (num == 0) {
        printf("0");
        return 0;
    }

    while (num > 0) {
        binary[i++] = num & 1; // Store remainder (0 or 1)
        num >>= 1; // Right shift the number
    }

    // Print the binary representation in reverse order
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }

    return 0;
}
