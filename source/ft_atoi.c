#include "push_swap.h"

static void    atoi_checker(const char *str, int i)
{
    while (str && str[i])
    {
        if (!ft_isdigit(str[i]))
        {
            write(1, "atoi_checker error\n", 19);
            exit (1);
        }
        i++;
    }
}

size_t	ft_atoi(const char *nptr)
{
	size_t	i;
	size_t	sign;
	size_t	result;
	int j;

	j = 0;
	i = 0;
	sign = 1;
	result = 0;
	while ((nptr) && (nptr[i] == 32 || nptr[i] == '\t' || nptr[i] == '\v'
		|| nptr[i] == '\n' || nptr[i] == '\r' || nptr[i] == '\f'))
		i++;
	if (nptr[i] == '+' || nptr[i] == '-' )
	{
		if (nptr[i] == '-')
			sign *= -1;
		i++;
	}
    atoi_checker(nptr, i);
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		// while (nptr[i] == '0' && nptr[i + 1] == '0')
		// 	i++;
		result = result * 10 + nptr[i] - 48;
		i++;
		j++;
        if (j >= 11)
        {
            write(1, "atoi error\n", 11);
            exit (1);
        }
	}
    if ((sign == -1 && sign * result < -2147483648) || (sign == 1 && result * sign > 2147483647))
    {
        write(1, "atoi error1\n", 12);
        exit (1);
    }
    
	return (sign * result);
}