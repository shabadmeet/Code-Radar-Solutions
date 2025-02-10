#include <stdio.h>

int main() 
{
    char a[100];
    scanf("%c",&a);

    if (a="A","E","I","O","U","a""e","i","o","u") {
        printf("Vowel\n");
    }
    else if (a = "1234567890"){
        printf("Digit\n");
    }
    else if (a = "!@#$") {
        printf("Special Charectar\n");
    }
    else {
        printf("Consonant\n")
    }
    return 0;
}