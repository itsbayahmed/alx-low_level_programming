#include  "main.h"
/**
 * *_strncpy - A funtion that copies the first n bytes
 * from src to dest.
 *
 * @src: The string which will be copied.
 * @dest: A Pointer to the destination array where the content will be copied.
 * @n: The number of bytes to be copied.
 *
 * Return: dest.
 */
char *_strncpy(char *dest, char *src, int n)
{

	int i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
	dest[i] = '\0';
	i++;
	}
	return (dest);
}



