#include <stdio.h>

void print_buffer(char *b, int size)
{
    int i, j;

    if (size <= 0)
    {
        printf("\n");
        return;
    }

    for (i = 0; i < size; i += 10)
    {
        printf("%08x: ", i);

        for (j = i; j < i + 10; j += 2)
        {
            if (j < size)
                printf("%02x%02x ", (unsigned char)b[j], (unsigned char)b[j + 1]);
            else
                printf("     ");
        }

        for (j = i; j < i + 10; j++)
        {
            if (j < size)
            {
                if (b[j] >= 32 && b[j] <= 126)
                    printf("%c", b[j]);
                else
                    printf(".");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }
}

