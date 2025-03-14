#include <stdio.h>

int main()
{

    int tempo, velocidade;
    double litro, distancia;

    scanf("%d %d", &tempo, &velocidade);

    distancia = tempo * velocidade;
    litro = distancia / 12;

    printf("%.3lf\n", litro);

    return 0;
}