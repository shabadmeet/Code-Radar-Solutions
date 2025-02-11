#include <stdio.h>

int main() {
    int a;
    scanf("%d %d", &a);
    
    if (a<=0){
        printf("Freez\n");
    }
    else{
        printf("Above Freezing\n");
    }
    return 0;
}