#include <stdio.h>

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int carry = 0;
    int i, j;
    int len1 = 0, len2 = 0, sum, digit;
    char *tmp;

    while (n1[len1] != '\0')
        len1++;
    while (n2[len2] != '\0')
        len2++;

    if (len1 >= size_r || len2 >= size_r)
        return 0;

    i = len1 - 1;
    j = len2 - 1;
    r[size_r - 1] = '\0';

    while (i >= 0 || j >= 0)
    {
        sum = carry;
        if (i >= 0)
            sum += n1[i] - '0';
        if (j >= 0)
            sum += n2[j] - '0';

        carry = sum / 10;
        digit = sum % 10;

        r[size_r - 2] = digit + '0';
        i--;
        j--;
        size_r--;
    }

    if (carry)
    {
        if (size_r <= 1)
            return 0;
        r[size_r - 2] = carry + '0';
    }
    else
    {
        size_r++;
    }

    tmp = r;
    while (*tmp == '0')
        tmp++;

    return tmp;
}

int main(void)
{
    char *n = "1234567892434574367823574575678477685785645685876876774586734734563456453743756756784458";
    char *m = "9034790663470697234682914569346259634958693246597324659762347956349265983465962349569346";
    char r[100];
    char r2[10];
    char r3[11];
    char *res;

    res = infinite_add(n, m, r, 100);
    if (res == 0)
    {
        printf("Error\n");
    }
    else
    {
        printf("%s + %s = %s\n", n, m, res);
    }

    n = "1234567890";
    m = "1";
    res = infinite_add(n, m, r2, 10);
    if (res == 0)
    {
        printf("Error\n");
    }
    else
    {
        printf("%s + %s = %s\n", n, m, res);
    }

    n = "999999999";
    m = "1";
    res = infinite_add(n, m, r2, 10);
    if (res == 0)
    {
        printf("Error\n");
    }
    else
    {
        printf("%s + %s = %s\n", n, m, res);
    }

    res = infinite_add(n, m, r3, 11);
    if (res == 0)
    {
        printf("Error\n");
    }
    else
    {
        printf("%s + %s = %s\n", n, m, res);
    }

    return 0;
}

