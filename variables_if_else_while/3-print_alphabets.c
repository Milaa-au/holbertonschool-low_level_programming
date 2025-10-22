#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
char lettermin;
char lettermaj;

for (lettermin = 'a' ; lettermin <= 'z'; lettermin++)
putchar(lettermin);
for (lettermaj = 'A'; lettermaj <= 'Z'; lettermaj++)
putchar(lettermaj);
putchar('\n');

return (0);
}
