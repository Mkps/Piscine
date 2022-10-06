/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloubier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 07:14:46 by aloubier          #+#    #+#             */
/*   Updated: 2022/09/15 10:59:55 by aloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_int_to_char(int i)
{
	char	c;

	c = i + 48;
	write(1, &c, 1);
}

void	ft_write_multiple( char a, char b, char c)
{
	ft_int_to_char(a);
	ft_int_to_char(b);
	ft_int_to_char(c);
	if (a != 7 || b != 8 || c != 9)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = 0;
	b = 0;
	c = 0;
	while (a <= 7)
	{
		b = a + 1;
		while (b <= 8)
		{
			c = b + 1;
			while (c <= 9)
			{
				ft_write_multiple(a, b, c);
				c = c + 1;
			}
			b = b + 1;
		}
		a = a + 1;
	}
}
