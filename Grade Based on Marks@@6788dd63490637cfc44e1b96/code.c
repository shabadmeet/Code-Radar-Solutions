#include <stdio.h>

int main() 
{
    int a;
    scanf("%d",&a);

    if (a>=90){
        printf("A\n",a);
    }

    else if (90 <a>= 80){
        printf("B\n");
    }

    else if (80 <a>= 70){
        printf("C\n");
    }

    else if (70 <a>= 60){
        printf("D\n");
    }
    else (a<60) {
        printf("F\n");
    }
    return 0;
}