#include <stdio.h>
#include <string.h>

char *ft_strcat(char *dest, char *src)
{
    char *start = dest;
    
    while(*dest)
    {
        dest++;
    }

    while((*dest++ = *src++));

    return start;
}
int main()
{
    char str1[100] = "Hello, ";
    char str2[] = "World";

    ft_strcat(str1, str2);

    printf("%s", str1);
}
