#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{

char lettermin = 'a';

for (lettermin = 'a'; lettermin <= 'z'; lettermin++)
{
if (lettermin != 'e' && lettermin != 'q')
putchar(lettermin);
}
putchar('\n');
return (0);
}
