#include <stdio.h>
int main()

{
    int a;
    int correct = 1999;
    // for (int i = 1;; i++)
    // {
    //     scanf("%d", &a);
    //     if (a == 1999)
    //     {
    //         printf("Correct\n");
    //         break;
    //     }
    //     else
    //     {
    //         printf("Wrong\n");
    //     }
    // }
    while (scanf("%d", &a) != EOF)
    {
        if (a == 1999)
        {
            printf("Correct\n");
            break;
        }
        else
        {
            printf("Wrong\n");
        }
    }
    return 0;
}