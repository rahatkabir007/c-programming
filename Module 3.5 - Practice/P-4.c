#include <stdio.h>
int main()

{
    int A;
    long long int B;
    float C;
    char D;
    scanf("%d\n%lld\n%f\n%c", &A, &B, &C, &D);
    printf("%d\n%lld\n%1.2f\n%c", A, B, C, D);
    return 0;
}