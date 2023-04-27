#include <stdio.h>
int main()

{
    char X;
    scanf("%c", &X);
    if (X >= 48 && X <= 64)
    {
        printf("IS DIGIT");
    }
    else if (X >= 65 && X <= 96)
    {
        printf("ALPHA\n");
        printf("IS CAPITAL");
    }
    else
    {
        printf("ALPHA\n");
        printf("IS SMALL");
    }

    return 0;
}
