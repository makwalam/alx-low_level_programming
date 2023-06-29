#include <stdlib.h>

char *leet(char *str)
{
    char *ptr = str;
    char *leet_str = malloc(sizeof(char) * 1337);  // Assuming the maximum length of the resulting string is 1337

    int i, j;
    char leet_chars[] = {'4', '3', '0', '7', '1'};
    char original_chars[] = {'a', 'e', 'o', 't', 'l'};

    for (i = 0; str[i] != '\0'; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (str[i] == original_chars[j] || str[i] == (original_chars[j] - 'a' + 'A'))
            {
                leet_str[i] = leet_chars[j];
                break;
            }
        }
        if (j == 5)
        {
            leet_str[i] = str[i];
        }
    }

    leet_str[i] = '\0';
    return leet_str;
}

