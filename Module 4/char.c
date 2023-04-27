#include <stdio.h>
int main()

{
    char X;
    scanf("%c", &X);
    if (X >= 97 && X <= 122)
    {
        int up = X - 32;
        printf("%c", up);
    }
    else
    {
        int low = X + 32;
        printf("%c", low);
    }

    return 0;
}