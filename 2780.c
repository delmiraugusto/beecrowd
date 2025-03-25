#include <stdio.h>

int main()
{
    int d, ponto;

    scanf("%d", &d);

    if (d <= 800)
        ponto = 1;
    else if (d <= 1400)
        ponto = 2;
    else
        ponto = 3;

    printf("%d\n", ponto);

    return 0;
}