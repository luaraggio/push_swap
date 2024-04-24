#include "include/push_swap.h"

static int	is_int(char **argv)
{
	int	i;
	int	j;
	
	j = 1;
	while (argv[j])
	{
		while (argv[j][i])
		{	
			i = 0;
			if (argv[j][i] == '-')
				i++;
			if (!ft_isdigit(argv[j][i]))
				return (0);
			i++;	
		}
		j++;	
	}
	return (1);
}

static int	is_duplicated(char **argv)
{
	int	i;
	int	j;
	int	is_dup;
	
	j = 1;
	is_dup = 0;
	while (argv[j])
	{
		i = j + 1;
		while (argv[i])
		{
			if (is_dup == ft_atoi(argv[i]))
				return (0);
			i++;
		}
		j++;
	}
	return (1);
}

static int	is_in_range(char **argv)
{
	int	j;

	j = 1;
	while (argv[j])
	{
		if (ft_atol(argv[j]) > MAX_INT || ft_atol(argv[j]) < MIN_INT)
			return (0);
		j++;
	}
	return (1);
}

int	is_valid(char **argv)
{
	if (is_int(argv) && is_duplicated(argv) && is_in_range(argv))
		return (1);
	return (0);
}
