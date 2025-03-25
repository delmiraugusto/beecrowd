#include <stdio.h>

int main()
{
    int x, count = 0;

    scanf("%d", &x);

    if (x % 2 == 0)
    {
        x++;
    }

    for (int i = 1; count < 6; i++)
    {
        printf("%d\n", x);
        x += 2;
        count++;
    }

    return 0;
}
