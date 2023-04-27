#include <stdio.h>
int main()

{
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    int sum = num1 + num2;
    int diff = num1 - num2;
    int prod = num1 * num2;
    float quot = (float)num1 / num2;

    printf("%d + %d = %d\n", num1, num2, sum);
    printf("%d - %d = %d\n", num1, num2, diff);
    printf("%d * %d = %d\n", num1, num2, prod);
    printf("%d / %d = %.2f\n", num1, num2, quot);

    return 0;
}