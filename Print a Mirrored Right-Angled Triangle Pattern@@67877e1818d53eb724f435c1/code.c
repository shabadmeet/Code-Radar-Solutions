// Your code here...
#include<stdio.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);

    for(i=0;i<5;i++){
        for(j=0;j<5-(i+1);j++){
            printf("  ");

        }
        for(k=0; k<i+1; k++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;

}