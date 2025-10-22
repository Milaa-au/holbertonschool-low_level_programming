#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 * Return: 0 (Success)
 *
 */
int main(void)
{
int n, sn;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	sn = n % 10;

if (sn > 5)
printf("Last digit of %d is %d and is greater than 5\n", n, sn);
else if (sn == 0)
printf("Last digit of %d is %d and is 0\n", n, sn);
else
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, sn);
return (0);
}
