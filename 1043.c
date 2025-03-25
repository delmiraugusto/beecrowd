#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, area, perimetro;

    scanf("%lf%lf%lf", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a)
    {
        perimetro = a + b + c;
        printf("Perimetro = %.1lf\n", perimetro);
    }
    else
    {
        area = ((a + b) * c) / 2;
        printf("Area = %.1lf\n", area);
    }

    return 0;
}