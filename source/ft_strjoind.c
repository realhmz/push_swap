#include "push_swap.h"

void    ft_swap(int a, int b)
{
    int tmp;

    tmp = a;
    a = b;
    b = tmp;
}
int check_double(int *nbr, int len)
{
    int i = 1;
    while (i < len)
    {
        if (nbr[i] > nbr[i - 1])
        {
            ft_swap(nbr[i], nbr[i - 1]);
            i = 1;
        }
        if (nbr[i] == nbr[i - 1])
            return (1);
        i++;
    }
    return 0;
}
int *str_to_nbr(char **str)
{
    int i;
    int j;
    int *nbr;
    i = double_len(str);
    printf("%d",i);
    j = 0;
    nbr = (int *)malloc(sizeof(int ) * i);
    while (j < i)
    {
        printf("time\n");
        nbr[j] = ft_atoi(str[j]);
        j++;
    }
    return nbr;
}


static char **get_str(char **s1, char *s2)
{
    char **tmp;
    char **tmp1;
    char **str;

    tmp = s1;

    tmp1 =  ft_split(s2,' ');
    str = ft_strdjoin(tmp,tmp1);
    free(tmp);
    free(tmp1);
    return str;
}
int main(int ac, char **av)
{
    char **str;
    char **tmp;
    int *nbr;
    int i = 1;
    if (ac == 1)
        return 0;
    while (i < ac)
    {
        str = get_str(str,av[i]);
        i++;
    }   
    i = 0;
    nbr = str_to_nbr(str);
    int len = ac;
    if (check_double(nbr,len))
    {
        printf("erooooor double");
    }
    
    while (i < 5)
    {
        printf("%d\n",nbr[i]);
        i++;
    }
    
    
}

// int main(int ac, char **av)
// {
//     int i = 0;
//     char **str = ft_split(av[1],' ');
//     char **str1 = ft_split(av[2],' ');

//     char **dest = ft_strdjoin(str,str1);
     
    
    
// }
// read
// seperate in char *
// atoi
// check double
