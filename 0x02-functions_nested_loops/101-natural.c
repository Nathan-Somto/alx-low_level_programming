#include <stdio.h>
/**
 * main - where program starts
 * Return: 0
 */
int main(void)
{

	int sum = 0;
	int i = 0;

	for (i = 0; i < 1024; i++)
	{

		if (i % 5 == 0  || i % 3 == 0)
		{
			sum += i;
		}
       	}
	printf("%d\n", sum);
	return (0);
}


