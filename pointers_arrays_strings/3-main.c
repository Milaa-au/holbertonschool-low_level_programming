#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "Coucou le loup";
    char *f = "d'accord je sais po";
    unsigned int n;

    n = _strspn(s, f);
    printf("%u\n", n);
    return (0);
}
