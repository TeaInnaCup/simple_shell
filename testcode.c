#include <stdio.h>
/**
 * main - entry point of code to make betty proud
 *
 * Return: 0 on Success and 1 if not
 */
int main(void)
{
	int a;
	int b;
	a = 2;
	b = 4;

	if (a == b)
	{
		printf("You did it, yaay\n");
	}
	else if (a < b)
	{
		printf("Don't be discouraged. Keep going\n");
	}
	else
	{
		printf("Sorcerer!!!\n");
	}
	return (0);
}
