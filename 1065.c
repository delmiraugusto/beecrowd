#include <stdio.h>

int main()
{

    int x;
    int cont = 0;

    for (int i = 1; i <= 5; i++)
    {
        scanf("%d", &x);
        if (x % 2 == 0)
        {
            cont++;
        }
    }

    printf("%d valores pares\n", cont);
    return 0;
}