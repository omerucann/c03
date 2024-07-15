#include <stdio.h>

int ft_strlen(char *str)
{
	int len = 0;
	while (str[len])
		len++;
	return len;
}
unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int dest_len = 0;
	unsigned int src_len = 0;

	while (dest[dest_len] && dest_len < size)
		dest_len++;

	while (src[src_len])
		src_len++;

	if (dest_len == size)
		return size + src_len;

	unsigned int i = 0;

	while (src[i] && (dest_len + i) < (size - 1))
	{
		dest[dest_len + i] = src[i];
		i++;
	}

	if ((dest_len + i) < size)
		dest[dest_len + i] = '\0';

	return dest_len + src_len;
}
int main(void)
{
	char dest[20] = "Hello, ";
	char src[] = "World!";
	unsigned int size = sizeof(dest) / sizeof(dest[0]);

	printf("Before ft_strlcat:\n");
	printf("dest: '%s'\n", dest);
	printf("src: '%s'\n", src);

	unsigned int result = ft_strlcat(dest, src, size);

	printf("\nAfter ft_strlcat:\n");
	printf("dest: '%s'\n", dest);
	printf("Total length: %u\n", result);

	return 0;
}