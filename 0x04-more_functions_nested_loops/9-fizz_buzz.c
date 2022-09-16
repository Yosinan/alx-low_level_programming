#include "main.h"
/**
 * main - prints numbers from 1 to 100
 * description - if its multiple of 3 it prints fizz
 * if its multiple of 5 it prints buzz
 * if its multiple of both then it prints fizzbuzz
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("%s", "FizzBuzz ");
		else if (i % 5 == 0)
			printf("%s", "Buzz ");
		else if (i % 3 == 0)
			printf("%s", "Fizz ");
		else
			printf("%d ", i);
	}
}
