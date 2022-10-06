/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloubier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 07:16:24 by aloubier          #+#    #+#             */
/*   Updated: 2022/09/15 11:12:03 by aloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_int_to_char_ten(int i)
{
	char	c;
	char	d;
	char	u;
	int		ten;

	if (i < 10)
	{
		c = i + 48;
		write(1, "0", 1);
		write(1, &c, 1);
	}
	if (i >= 10)
	{
		ten = i / 10;
		d = ten + 48;
		u = i % 10 + 48;
		write(1, &d, 1);
		write(1, &u, 1);
	}
}

void	ft_print_comb2(void)
{
	int	first_number;
	int	second_number;

	first_number = 0;
	second_number = 0;
	while (first_number <= 98)
	{
		second_number = first_number + 1;
		while (second_number <= 99)
		{
			ft_int_to_char_ten(first_number);
			write(1, " ", 1);
			ft_int_to_char_ten(second_number);
			if (first_number != 98 || second_number != 99)
			{
				write(1, ", ", 2);
			}
			second_number = second_number + 1;
		}
		first_number = first_number + 1;
	}
}
