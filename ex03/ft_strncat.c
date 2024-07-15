#include <stdio.h>

char *ft_strstr(char *str, char *tofind) {
    int i = 0;
    int a;

    if (*tofind == '\0')
        return (str);

    while (str[i]) {
        a = 0;
        while (str[i + a] && str[i + a] == tofind[a]) {
            if (tofind[a + 1] == '\0')
                return (str + i);
            a++;
        }
        i++;
    }
    return (0);
}

int main()
{
    char str[] = "Selam Dunya nasılsın iyi misin";
    char tofind[] = "nasılsın";

    char *result = ft_strstr(str, tofind);

       if (result != 0) {
        printf("'%s' dizesi '%s' dizesinin içinde bulundu. Başlangıç adresi: %p\n", tofind, str, result);
    } else {
        printf("'%s' dizesi '%s' dizesinin içinde bulunamadı.\n", tofind, str);
    }
}