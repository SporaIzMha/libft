
#include "libft.h"

void    *ft_strdup(const char *str)
{
    char        *str2;
    size_t      i;

    i = 0;
    str2 = (char *)malloc(sizeof (*str) * (ft_strlen(str) + 1));
    if (!str2)
        return (NULL);
    while (str[i])
    {
        str2[i] = str[i];
        i++
    }
    str2[i] = '\0';
    return (str2);
}