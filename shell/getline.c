#include <stdio.h>

/**
 * main - prints command entered by user
 * Return: 0 on success, -1 on failure
 */

int main(void)
{
	ssize_t line;

	line = getline(char **restrict lineptr, size_t *restrict n, FILE *restrict stream);
	printf("$ \n");
	printf("%lu\n", line);
	return (0);
}
