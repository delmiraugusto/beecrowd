#include <stdio.h>

int main()
{
    int horaIni, horaFim;

    scanf("%d%d", &horaIni, &horaFim);

    if (horaIni == horaFim)
        printf("O JOGO DUROU 24 HORA(S)\n");
    else if (horaIni > horaFim)
    {
        int tempo = 24 - horaIni + horaFim;
        printf("O JOGO DUROU %d HORA(S)\n", tempo);
    }
    else
    {
        int tempo = horaFim - horaIni;
        printf("O JOGO DUROU %d HORA(S)\n", tempo);
    }

    return 0;
}