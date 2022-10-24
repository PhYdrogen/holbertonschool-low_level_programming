#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - duplicate string
 * @str: string to duplicate
 * Return: a pointer to the new string
 */
char *_strdup(char *str)
{


	char *stringu;
	int x;

	if (str == NULL)
		return (NULL);
	stringu = malloc(strlen(str) * sizeof(char));

	if (stringu == NULL)
		return (NULL);

	for (x = 0; str[x] != '\0'; x++)
		*(stringu + x) = *(str + x);
	return (stringu);
	free(stringu);
}
