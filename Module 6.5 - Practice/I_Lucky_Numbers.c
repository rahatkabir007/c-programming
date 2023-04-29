#include <stdio.h>
int main()

{
    int N;
    scanf("%d", &N);
    int rightDigit = N % 10;
    int leftDigit = N / 10;
    if (rightDigit == 0)
    {
        printf("YES");
    }
    else if (leftDigit % rightDigit == 0 || rightDigit % leftDigit == 0 || rightDigit == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}