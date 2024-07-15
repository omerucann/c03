#include <stdio.h>

char *ft_strstr(char *str, char *tofind)
{
    int i;
    int a;

    if (!*tofind)
        return (str);

    i = 0;
    while (str[i])
    {
        a = 0;
        while (tofind[a] && str[i + a] == tofind[a])
            a++;
        if (!tofind[a])
            return (&str[i]);
        i++;
    }
    return (0);
}
int main()
{
     char str[] = "Hello, world!";
    char tofind1[] = "world";
    
    char *result = ft_strstr(str, tofind1);

        if (result)
        printf("Found '%s' in '%s': %s\n", tofind1, str, result);
    else
        printf("'%s' not found in '%s'\n", tofind1, str);
}