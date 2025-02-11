#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);

    if (n < 2) {
        printf("Not Prime\n");
        
    }

    for (i = 2; i * i <= n; i++)
        if (n % i == 0) {
            printf("Not Prime\n");
         
        }

    printf("Prime\n");
    return 0;
}
