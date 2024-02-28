#include "main.h"
/**
 * _strtok - function that splits strings without using (strtok)
 * @string: string to be splitted
 * @separator: delimiter
 * Return: nothing
 */
void _strtok(const char *string, char separator)
{
	int Len = strlen(string);
	char *tk = NULL;
	int tkStart = 0, i, Length_of_token;

	for (i = 0; i <= Len; i++)
	{
		if (string[i] == separator || string[i] == '\0')
		{
			Length_of_token = i - tkStart;
			tk = malloc((Length_of_token + 1) * sizeof(char));
			strncpy(tk, string + tkStart, Length_of_token);
			tk[Length_of_token] = '\0';

			printf("%s\n", tk);

			free(tk);
			tkStart = i + 1;
		}
	}
}

