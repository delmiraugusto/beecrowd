#include <stdio.h>

int main()
{

    double x;
    int cont = 0;

    for (int i = 1; i <= 6; i++)
    {
        scanf("%lf", &x);
        if (x > 0)
        {
            cont++;
        }
    }

    printf("%d valores positivos\n", cont);
    return 0;
}