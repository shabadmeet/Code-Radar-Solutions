#include <stdio.h>

void printBinary(int num) {
    int flag = 0; 
    for (int i = 31; i >= 0; i--) 
    {
        int bit = (num >> i) & 1; 
        if (bit) flag = 1; 
        if (flag) printf("%d", bit);
    }
    if (!flag) printf("0");
    printf("\n");
}
int main() {
    int num;
    scanf("%d", &num);
    printBinary(num);
    return 0;
}
