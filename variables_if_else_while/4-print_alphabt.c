#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{

char lettermin;

lettermin = 'a';
while (lettermin <= 'z')
if (lettermin != 'e' && lettermin != 'q')
putchar(lettermin);
lettermin++;

putchar('\n');

return (0);
}
