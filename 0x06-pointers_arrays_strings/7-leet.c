#include <stdlib.h>

char *leet(char *str)
{
    char *ptr = str;
    char *leetStr = malloc(sizeof(char) * 100); // Assuming the encoded string won't exceed 100 characters
    int i, j;
    char leetLetters[] = "aAeEoOtTlL";
    char leetChars[] = "4433007711";

    if (leetStr == NULL)
        return NULL;

    // Copy the original string while encoding characters
    for (i = 0; str[i] != '\0'; i++)
    {
        for (j = 0; leetLetters[j] != '\0'; j++)
        {
            if (str[i] == leetLetters[j])
            {
                leetStr[i] = leetChars[j];
                break;
            }
        }
        if (leetLetters[j] == '\0')
            leetStr[i] = str[i];
    }
    leetStr[i] = '\0';

    // Copy the encoded string back to the original string
    for (i = 0; leetStr[i] != '\0'; i++)
        ptr[i] = leetStr[i];
    ptr[i] = '\0';

    free(leetStr);
    return str;
}

