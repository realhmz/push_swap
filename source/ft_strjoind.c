#include "push_swap.h"

int double_len(char **str)
{
    int i;

    i = 0;
    while (str && str[i])
        i++;
    // printf("len %d\n", i);
    return i;
}

char **ft_strdjoin(char **str, char**s)
{
    int i;
    int j;
    int t;
    int x;
    char    **dest;
    i = double_len(str);    
    j = double_len(s);
    x = 0;
    dest = malloc(sizeof(char *) * (i + j + 1));
    while (x < i)
    {
        dest[x] = ft_strdup(str[x]);
        x++;
    }
    t = 0;
    while (x < i + j)
    {
        dest[x] = ft_strdup(s[t]);
        x++;
        t++;
    }
    dest[i + j] = NULL;
    return (dest);
}