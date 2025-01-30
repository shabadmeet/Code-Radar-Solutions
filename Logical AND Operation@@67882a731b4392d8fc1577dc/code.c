#include <stdio.h>
int main() {
    int a,b;
    scanf("%d %d", &a, &b);
    if (a&&b > 0){
        printf("True\n",a,b);
    }
    else{
        printf("False\n",a,b);
    }
    return 0;
}