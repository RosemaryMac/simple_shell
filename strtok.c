#include <stdio.h>

/**
 * main - prints all arguments without using ac
 * @ac: number of arguments in av
 * @av: array of strings (arguments)
 * counter - prints all given arguments given through command line
 * Return: Always 0
 */
int main(int ac, char *av[])
{
	int counter;

	for (counter = 0; counter < ac; counter++)
		printf("av[%2d]: %s\n", counter, av[counter]);

	return (0);
}
