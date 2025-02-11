#include <stdio.h>

int main() {
    char l;
    scanf("%c", &l);

    if (l=='R')
        printf("Stop\n");
    else if (l=='G')
        printf("Go\n");
    else if (l=='Y')
        printf("Slow Down\n");
    else
        printf("Invalid input\n");
    return 0;
}