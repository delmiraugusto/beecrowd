#include <stdio.h>
#include <string.h>

int main()
{
    char tuiti[501];

    fgets(tuiti, sizeof(tuiti), stdin);

    int len = strlen(tuiti);
    if (tuiti[len - 1] == '\n')
    {
        tuiti[len - 1] = '\0';
    }

    if (strlen(tuiti) <= 140)
        printf("TWEET\n");
    else
        printf("MUTE\n");

    return 0;
}
