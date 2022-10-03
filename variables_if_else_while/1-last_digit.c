#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - entry point
 * Return: 0 no error
 */
int main(void)
{
	int n;
	int res;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* starting of my code */
	if (n > 0)
	{
		res = n % 10;
		if (res > 5)
			printf("Last digit of %d is %d and is greater than 5\n", n, res);
		else if (res < 6 && res != 0)
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, res);
		else
			printf("Last digit of %d is %d and is 0\n", n, res);
	}
	else if (n < 0)
	{
		res = n % -10;
		if (res > 5)
			printf("Last digit of %d is %d and is greater than 5\n", n, res);
		else if (res < 6 && res != 0)
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, res);
		else
			printf("Last digit of %d is %d and is 0\n", n, res);
	}
	/* ending of my code */
	return (0);
}
