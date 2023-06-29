#include <stdlib.h>

char *leet(char *str)
{
    int i, j;
    char *leet_str = malloc(sizeof(char) * strlen(str) + 1);
    char *leet_map[] = {
        "4", "3", "0", "7", "1",
        "4", "3", "0", "7", "1",
        "4", "3", "0", "7", "1",
        "4", "3", "0", "7", "1",
        "4", "3", "0", "7", "1",
        "4", "3", "0", "7", "1"
    };

    for (i = 0; str[i] != '\0'; i++)
    {
        leet_str[i] = str[i];
        for (j = 0; j < 26; j++)
        {
            if (str[i] == 'a' + j || str[i] == 'A' + j)
            {
                leet_str[i] = *leet_map[j];
                break;
            }
        }
    }

    leet_str[i] = '\0';
    return leet_str;
}

