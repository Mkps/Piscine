/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloubier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 16:33:36 by aloubier          #+#    #+#             */
/*   Updated: 2022/09/17 16:33:40 by aloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdlib.h>

void	ft_putchar(char c);

void	print_char(int x, int y, int width, int height)
{
	if (x == 1 && y == 1)
		ft_putchar('A');
	if ((x == width && y == 1) && !(width == 1))
		ft_putchar('C');
	if ((x == 1 && y == height) && !(height == 1))
		ft_putchar('C');
	if ((x == width && y == height) && !((height == 1) || (width == 1)))
		ft_putchar('A');
	if (x > 1 && x < width && (y == 1 || y == height))
		ft_putchar('B');
	if (y > 1 && y < height && (x == 1 || x == width))
		ft_putchar('B');
	if (!(x == 1 || x == width) && !(y == 1 || y == height))
		ft_putchar(' ');
	if (x == width)
		ft_putchar('\n');
}

void	parse_table(int x, int y)
{
	int	ix;
	int	iy;

	iy = 0;
	while (iy < y)
	{
		ix = 0;
		while (ix < x)
		{
			print_char(ix + 1, iy + 1, x, y);
			ix++;
		}
		iy++;
	}
}

void	rush04(int x, int y)
{
	if (!(x < 1 || y < 1))
		parse_table(x, y);
}

/*
int	main(int ac, char **av)
{
	if (ac == 3)
		rush04(atoi(av[1]), atoi(av[2]));
	return (0);
}
*/