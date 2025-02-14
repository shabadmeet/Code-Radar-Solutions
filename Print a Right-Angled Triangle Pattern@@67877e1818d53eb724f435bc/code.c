// Your code here...
#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);  

    for (int i = 0; i > 0; i--) 
    {  
        for (int j = N; j < i; j++) {
            printf(" *");
        }
        printf("\n"); 
    }

    return 0;
}
