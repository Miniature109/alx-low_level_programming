#include <stdio.h>
/**
 * main - program that prints all single digit numbers of base 10 starting from 0
 * Return: Always 0.
 */

int main(void)
{
	int num;
	while (num < 10)
	{
		printf("%d", num);
		num += 1;
	}
	printf("\n");
	return (0);
}
