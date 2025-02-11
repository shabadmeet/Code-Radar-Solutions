#include <stdio.h>

int main() {
    int num, is_prime = 1;
    scanf("%d", &num);

    if (num <= 1) {
        is_prime = 0;  // Numbers <= 1 are not prime
    } else {
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                is_prime = 0;  // If divisible, not a prime number
                break;
            }
        }
    }

    if (is_prime) {
        printf("Prime\n");
    } else {
        printf("Not Prime\n");
    }

    return 0;
}
