#include <stdio.h>

int main()
{
    int a, b, c, A, B, C, comidaFaltante = 0;

    scanf("%d%d%d%d%d%d", &a, &b, &c, &A, &B, &C);

    if (A > a)
        comidaFaltante += A - a;

    if (B > b)
        comidaFaltante += B - b;

    if (C > c)
        comidaFaltante += C - c;

    printf("%d\n", comidaFaltante);

    return 0;
}