#include <stdio.h>

void printBinary(int num) {
    int flag = 0; // To avoid leading zeros
    for (int i = 31; i >= 0; i--) {
        int bit = (num >> i) & 1; // Extract the i-th bit
        if (bit) flag = 1; // Start printing when first 1 is encountered
        if (flag) printf("%d", bit);
    }
    if (!flag) printf("0"); // If number is 0, print 0
    printf("\n");
}

int main() {
    int num;
    
    // Read the input number
    scanf("%d", &num);
    
    // Print the binary representation
    printBinary(num);
    
    return 0;
}
