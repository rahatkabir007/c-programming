#include <stdio.h>
int main()

{

    // for
    int i;
    for (i = 1; i <= 5; i = i + 1)
    {
        printf("for - %d\n", i);
    }

    // while

    i = 1;
    while (i <= 5)
    {
        printf("while - %d\n", i);
        i = i + 1;
    }

    // do-while
    i = 1;
    do
    {
        printf("do-while - %d\n", i);
        i = i + 1;
    } while (i <= 5);

    return 0;
}