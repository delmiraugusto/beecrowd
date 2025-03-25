#include <stdio.h>

int main()
{
    int diaInicio, diaFim;
    int hInicio, mInicio, sInicio;
    int hFim, mFim, sFim;

    scanf("Dia %d", &diaInicio);
    scanf("%d : %d : %d", &hInicio, &mInicio, &sInicio);
    scanf(" Dia %d", &diaFim);
    scanf("%d : %d : %d", &hFim, &mFim, &sFim);

    int inicioSegundos = diaInicio * 86400 + hInicio * 3600 + mInicio * 60 + sInicio;
    int fimSegundos = diaFim * 86400 + hFim * 3600 + mFim * 60 + sFim;

    int duracao = fimSegundos - inicioSegundos;

    int dias = duracao / 86400;
    duracao %= 86400;
    int horas = duracao / 3600;
    duracao %= 3600;
    int minutos = duracao / 60;
    int segundos = duracao % 60;

    printf("%d dia(s)\n", dias);
    printf("%d hora(s)\n", horas);
    printf("%d minuto(s)\n", minutos);
    printf("%d segundo(s)\n", segundos);

    return 0;
}