/**
 * _strcpy - Copies the string pointed to by src, including the terminating
 *            null byte (\0), to the buffer pointed to by dest.
 * @dest: Pointer to the destination buffer
 * @src: Pointer to the source string
 *
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *dest_start = dest; /* Store the start address of dest */

	/* Copy each character from src to dest until the null byte is encountered */
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	/* Add the terminating null byte to the end of dest */
	*dest = '\0';

	return (dest_start);
}

