/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloubier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 15:58:14 by aloubier          #+#    #+#             */
/*   Updated: 2022/09/17 16:04:52 by aloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_char(int x, int y, int width, int height)
{
	if (x == 1 && y == 1)
		ft_putchar('o');
	if ((x == width && y == 1) && !(width == 1))
		ft_putchar('o');
	if ((x == 1 && y == height) && !(height == 1))
		ft_putchar('o');
	if ((x == width && y == height) && !((height == 1) || (width == 1)))
		ft_putchar('o');
	if (x > 1 && x < width && (y == 1 || y == height))
		ft_putchar('-');
	if (y > 1 && y < height && (x == 1 || x == width))
		ft_putchar('|');
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

void	rush00(int x, int y)
{
	if (!(x < 1 || y < 1))
		parse_table(x, y);
}

/*
int	main(int ac, char **av)
{
	if (ac == 3)
		rush0X(atoi(av[1]), atoi(av[2]));
	return (0);
}
*/
/*void	print_char(int x, int y, int width, int height)
{
	char	UL;
	char	UR;
	char	DL;
	char	DR;
	char	H;
	char	V;

	UL = 'A';
	UR = 'B';
	DL = 'C';
	DR = 'D';
	H = '-';
	V = '|';
	//affiche le caractere en haut a gauche
	if (x == 1 && y == 1)
		ft_putchar('o');
	//affiche le caractere en haut a droite
	if ((x == width && y == 1) && !(width == 1))
		ft_putchar('o');
	//affiche le caractere en bas a gauche
	if ((x == 1 && y == height) && !(height == 1))
		ft_putchar('o');
	//affiche le caractere en bas a droite
	if ((x == width && y == height) && !((height == 1) || (width == 1)))
		ft_putchar('o');
	//affiche les caracteres horizontaux
	if (x > 1 && x < width && (y == 1 || y == height))
		ft_putchar('-');
	//affiche les caracteres verticaux
	if (y > 1 && y < height && (x == 1 || x == width))
		ft_putchar('|');
	//affiche les caracteres du milieu
	if (!(x == 1 || x == width) && !(y == 1 || y == height))
		ft_putchar(' ');
	//affiche un retour a la ligne a la fin de chaque ligne
	if (x == width)
		ft_putchar('\n');
}
*/
