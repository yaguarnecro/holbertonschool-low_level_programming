#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */

/**
 *  main - tells you if random number is negative or positive
 *
 *  Description: Uses if else to print if # if neg/pos/zero
 *  Return: returns zero
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%i is positive\n");
	}if else(n==0)
	{
		printf("%i is zero\n");
	}else{
		printf("%i is negative\n");
	}

	return (0);
}
