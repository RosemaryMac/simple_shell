#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * bufsize: buffer length
 * buffer: temporary storage area
 * size_t: is the unsigned integral part
 * getline: accepts a string from the input stream as an input
 *
 */
int input(char *s, int length);

int main(void)
{
	char *buffer;
	size_t bufsize = 64;
	size_t characters;

	buffer = (char *)malloc(bufsize* sizeof(char));
	if (buffer == NULL)
	{
		perror("unable to allocate buffer");
		exit(1);
	}
	printf("$ ");
	characters = getline(&buffer, &bufsize, stdin);
	printf("$ %s\n", buffer);

	return (0);
}
