#include <stdio.h>

int main()
{
    int horaIni, minIni, horaFim, minFim, horaTotal, minTotal;

    scanf("%d%d%d%d", &horaIni, &minIni, &horaFim, &minFim);

    if (horaIni == horaFim && minIni == minFim)
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    else
    {
        horaTotal = horaFim - horaIni;
        minTotal = minFim - minIni;

        if (minTotal < 0)
        {
            minTotal += 60;
            horaTotal--;
        }

        if (horaTotal < 0)
        {
            horaTotal += 24;
        }

        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horaTotal, minTotal);
    }

    return 0;
}