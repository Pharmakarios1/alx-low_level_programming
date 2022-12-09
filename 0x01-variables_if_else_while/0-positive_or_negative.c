#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/** 
 * main -first else,if  statements
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n=0)
	{
	printf("%d is Negative\n", n);
	} else if(n==0)
	{
	printf("%d is Zero\n", n);
	} else
	{
	printf("%d is Positive\n", n);
	}	 
return (0);
}
