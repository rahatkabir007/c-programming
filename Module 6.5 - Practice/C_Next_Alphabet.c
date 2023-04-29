#include <stdio.h>
int main()

{
    char character;
    scanf("%c", &character);
    if (character == 122)
    {
        int charNumber = 97;
        printf("%c", charNumber);
    }
    else
    {
        int charNumber = character + 1;
        printf("%c", charNumber);
    }
    return 0;
}