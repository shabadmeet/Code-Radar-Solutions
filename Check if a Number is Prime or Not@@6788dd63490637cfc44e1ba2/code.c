// Your code here...
#include<stdio.h>

int main()
{
    int a;
    scanf("%d",&a);

    if ( (a%1==0) && (a%a==0) ){
        printf("Prime\n");
    }
    else{
        printf("Not Prime\n");
    }
    return 0;
}
    