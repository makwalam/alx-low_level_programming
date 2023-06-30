#include <stdio.h>

int main(void)
{
    int n;
    int a[5];
    int *p;

    a[2] = 1024;
    p = &n;
    sprintf((char *)p, "a[2] = %d\n", 98); /* Format the output */
    printf("%s", (char *)p); /* Print the formatted output */

    printf("a[2] = %d\n", a[2]);
    return (0);
}

