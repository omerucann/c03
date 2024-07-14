#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;

    while(s1[i] != '\0' && s2[i] != '\0')
    {
        if(s1[i] != s2[i])
        {
            s1[i] - s2[i];
        }
        i++;
    }
    return s1[i] - s2[i];
}
int main()
{
    char str1[] = "Merhaba";
    char str2[] = "Merhaba";
    char str3[] = "World";
    char str4[] = "Turkey";

    printf("'%s', ve '%s' : %d\n", str1, str2, ft_strcmp(str1, str2));
    printf("'%s', ve '%s' : %d\n", str1, str3, ft_strcmp(str1, str3));
    printf("'%s', ve '%s' : %d\n", str1, str4, ft_strcmp(str1, str4));
    printf("'%s', ve '%s' : %d\n", str2, str3, ft_strcmp(str2, str3));
    printf("'%s', ve '%s' : %d\n", str2, str4, ft_strcmp(str2, str4));
    printf("'%s', ve '%s' : %d\n", str3, str4, ft_strcmp(str3, str4));
}