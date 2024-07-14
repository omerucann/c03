#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int i;

    i = 0;
    n = 0;

    if(n == 0)
    {
        return 0;
    }
    while(i < n - 1 && s1[i] && s2[i] && s1[i] == s2[i])
    {
        i++;
    }
    return (unsigned char)s1[i] - (unsigned char)s2[i]; 
}

int main()
{
    char str1[] = "Hello";
    char str2[] = "World";
    unsigned int n = 4;

    int result = ft_strncmp(str1, str2, n);

    if(result < 0)
    {
        printf("'%s', than less character '%s'\n", str1, str2);
    }
    else if(result > 0)
    {
        printf("'%s' than more character '%s'\n", str1, str2);
    }
    else
    {
        printf("'%s' equal character '%s'\n", str1, str2);
    }
}
