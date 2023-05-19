#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * Main - this is my main function
 * printf 1 - to print if it is negative
 * printf 2 - to print if it is positive
 * printf 3 - to print if it is zero
 *
 * return - always return 0
 *
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0) {
		printf("%d , is negative\n", n);
	}
	else if (n > 0) {	
		printf("%d , is positive\n", n);
	}
	else  {
		printf("%d , is zero\n" ,n);
	}
	return (0);
}
