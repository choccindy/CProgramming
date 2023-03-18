#include <stdio.h>

int power(int, int); // function declaration

/* Test power function.*/
main()
{
	int i;

	for (i = 0; i < 10; ++i)
		printf("%d %d %d\n", i, power(2, i), power(-3, i)); // call function "power"
	return 0;
}


/* power: raise base to n-th power; n >= 0 */
int power(int base, int nn) // function definition
{
	int i, p;

	p = 1;
	for (i = 1; i <= nn; ++i)
		p = p * base;

	nn = 10000;
	return p;
}

void func_example(int i)
{
	if (i == 1)
	{
		return;
	}
	else if (i == 2)
	{
		// ... 
	}
	else
	{

	}
	return;
}