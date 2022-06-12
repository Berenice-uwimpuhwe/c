#include <stdio.h>

/**
 * main - prints command entered by user
 * Return: 0 on success, -1 on failure
 */

int main(void)
{
	ssize_t line;

	line = getline();
	printf("$ \n");
	printf("%u\n", line);
	return (0);
}
