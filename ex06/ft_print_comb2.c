#include <unistd.h>

void	put(int x_10, int x_1, int y_10, int y_1)
{
	if (x_10 == y_10 && x_1 == y_1)
		;
	else
	{
		write(1, &x_10, 1);
		write(1, &x_1, 1);
		write(1, " ", 1);
		write(1, &y_10, 1);
		write(1, &y_1, 1);
		if (x_10 == '9' && x_1 == '8' && y_10 == '9' && y_1 == '9')
		{
			write(1, "\n", 1);
			return ;
		}
		write(1, ", ", 2);
	}
}

void	calc(int x_10, int x_1, int y_10, int y_1)
{
	while (x_10 <= '9')
	{
		while (x_1 <= '9')
		{
			while (y_10 <= '9')
			{
				while (y_1 <= '9')
				{
					put(x_10, x_1, y_10, y_1);
					y_1++;
				}
				y_1 = '0';
				y_10++;
			}
			y_1 = x_1++ + 1;
			y_10 = x_10;
		}
		x_1 = '0';
		y_10 = x_10++;
	}
}

void	ft_print_comb2(void)
{
	int	x_10;
	int	x_1;
	int	y_10;
	int	y_1;

	x_10 = '0';
	x_1 = '0';
	y_10 = '0';
	y_1 = '1';
	calc (x_10, x_1, y_10, y_1);
	return ;
}
