#include "main.h"

#define LEN 4

void _memset(char *s, char c, int len);
/**
 * _strcpy - function with two arguments
 * @dest: 1st argument char type pointer
 * @src: 2nd argument char type pointer
 *
 * Description: copies the string to an array
 * Return: na
 */
char *_strcpy(char *dest, char *src)
{
	/*
	*int i;
	*
	*for (i = 0; src[i] != '\0'; i++)
	*	dest[i] = src[i];
	*for ( ; i < src[i]; i++)
	*	dest[i] = '\0';
	*return (dest);
	*/
	
		char cpy[LEN + 1] = {0};
	char *str;
	char *ret;

	_memset(cpy, 'H', LEN);
	str = "Z";
	ret = _strcpy(cpy, str);
	printf("%s\n%s\n%s\n", str, cpy, ret);
	return (0);
}
