#include "push_swap.h"

int check_double(int *nbr, int len)
{
    int i = 1;
    int j;
    int x = 0;
    int d = 0;
    while (i < len)
    {
        j = nbr[i];
        d = 0;
        while (d < len)
        {
            if (j == nbr[d])
                x++;
            if (x > 1)
            {
                // printf("%d",nbr[d]);
                return (1);
            }
            d++;
        }
        x = 0;
        i++;
    }
    return 0;
}
int nbr_len(int l)
{
    static int i;
    if (l == 0)
        return i;
    else
        i = l;
    return i;
}
int *str_to_nbr(char **str)
{
    int i;
    int j;
    int *nbr;
    i = double_len(str);
    j = 0;
    nbr = (int *)malloc(sizeof(int ) * i);
    while (j < i)
    {
        // printf("time\n");
        nbr[j] = ft_atoi(str[j]);
        j++;
    }
    nbr_len(j);
    // free(str);
    return nbr;
}

char **get_str(char **s1, char *s2)
{
    char **tmp;
    char **tmp1;
    char **str;

    tmp = s1;

    tmp1 =  ft_split(s2,' ');
    str = ft_strdjoin(tmp,tmp1);
    free(tmp1);
    return str;
}
