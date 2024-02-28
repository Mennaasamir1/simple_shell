#include "main.h"
#define BUFF 128

/**
 * *custom_getline - custom function that acts like getline
 * Return: pointer to num of chars;
 */
char *custom_getline()
{
	char sh;
	char *p, *tmpo;

	tmpo = p = malloc(sizeof(char) * BUFF);

	while ((c = getchar()) != '\n' && c != EOF)
	{
		*tmpo = c;
		tmpo++;
	}
	*tmpo = '\0';
	printf("%s\n", p);
	return (p);
}
