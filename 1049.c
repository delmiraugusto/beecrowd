#include <stdio.h>
#include <string.h>

int main()
{

    char tipo1[100], tipo2[100], tipo3[100], animal[100];

    scanf(" %[^\n] ", tipo1);
    scanf(" %[^\n] ", tipo2);
    scanf(" %[^\n] ", tipo3);

    if (strcmp(tipo1, "vertebrado") == 0)
    {
        if (strcmp(tipo2, "ave") == 0)
        {
            if (strcmp(tipo3, "carnivoro") == 0)
                strcpy(animal, "aguia");
            else
                strcpy(animal, "pomba");
        }
        else
        {
            if (strcmp(tipo3, "onivoro") == 0)
                strcpy(animal, "homem");
            else
                strcpy(animal, "vaca");
        }
    }

    else
    {
        if (strcmp(tipo2, "inseto") == 0)
        {
            if (strcmp(tipo3, "hematofago") == 0)
                strcpy(animal, "pulga");
            else
                strcpy(animal, "lagarta");
        }
        else
        {
            if (strcmp(tipo3, "hematofago") == 0)
                strcpy(animal, "sanguessuga");
            else
                strcpy(animal, "minhoca");
        }
    }

    printf("%s\n", animal);

    return 0;
}