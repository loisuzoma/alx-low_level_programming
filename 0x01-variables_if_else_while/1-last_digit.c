#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Program entry point
 *
 * Return:0
 */
int main(void)
{
	int n;
	int 1digit;


	srand(time(0));
	n = rand() - RAND_MAX / 2;
	1digit = n % 10;
	if (1digit > 5)
	{
		printf("Last digit of %d and is %d and is greater than 5\n", n, 1digit);
	}
	else if (1digit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", 1digit);
	}
	else if (1digit < 6 && 1digit != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, 1digit);
	}
	return (0);
}
