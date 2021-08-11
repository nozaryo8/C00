#include <unistd.h>

void	calc(int n_100, int n_10, int n_1)
{
	while (n_100 <= '7')
	{
		while (n_10 <= '8')
		{
			while (n_1 <= '9')
			{
				write(1, &n_100, 1);
				write(1, &n_10, 1);
				write(1, &n_1, 1);
				if (n_100 == '7' && n_10 == '8' && n_1 == '9')
				{
					write(1, "\n", 1);
					return ;
				}
				write(1, ", ", 2);
				n_1++;
			}
			n_1 = ++n_10 + 1;
		}
		n_10 = ++n_100;
	}
}

void	ft_print_comb(void)
{
	int	n_100;
	int	n_10;
	int	n_1;

	n_100 = '0';
	n_10 = '1';
	n_1 = '2';
	calc(n_100, n_10, n_1);
	return ;
}
