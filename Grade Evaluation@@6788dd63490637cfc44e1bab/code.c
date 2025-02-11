#include <stdio.h>

int main() {
    int day;
    scanf("%d", &day);
    
    switch(day) {
        case 1: printf("Excellent\n"); break;
        case 2: printf("Good\n"); break;
        case 3: printf("Average\n"); break;
        case 4: printf("Below Average\n"); break;
        case 5: printf("Fail\n"); break;
    }
        return 0;
    }