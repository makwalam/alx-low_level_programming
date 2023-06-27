#include "main.h"

int _atoi(char *s)
{
    int sign = 1;
    int result = 0;
    int i = 0;

    // Skip leading whitespace
    while (s[i] == ' ')
    {
        i++;
    }

    // Check for a sign character
    if (s[i] == '-' || s[i] == '+')
    {
        sign = (s[i] == '-') ? -1 : 1;
        i++;
    }

    // Convert the string to an integer
    while (s[i] >= '0' && s[i] <= '9')
    {
        // Check for overflow
        if (result > (INT_MAX / 10) || (result == (INT_MAX / 10) && (s[i] - '0') > (INT_MAX % 10)))
        {
            return (sign == -1) ? INT_MIN : INT_MAX;
        }

        result = result * 10 + (s[i] - '0');
        i++;
    }

    return result * sign;
}

