
#include <unistd.h>

void	ft_print(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 99)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_print ((i / 10) + '0');
			ft_print ((i % 10) + '0');
			ft_print(' ');
			ft_print ((j / 10) + '0');
			ft_print ((j % 10) + '0');
			if (!((i / 10)
					== 9 && (i % 10)
					== 8 && (j / 10)
					== 9 && (j % 10)
					== 9))
				write(1, ", ", 2);
			j++;
		}
		i++;
	}
}
