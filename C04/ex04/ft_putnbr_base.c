/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloubier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 10:35:36 by aloubier          #+#    #+#             */
/*   Updated: 2022/10/04 09:52:08 by aloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_find_error(char *base)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (1);
	while (base[i])
	{
		if (base[i] <= 32 || base[i] > 126
			|| base[i] == '+' || base[i] == '-')
			return (1);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	if (i <= 1)
		return (1);
	else
		return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long			nb;
	int				radix;

	nb = (long)nbr;
	if (ft_find_error(base))
		return ;
	radix = ft_strlen(base);
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb >= radix)
	{
		ft_putnbr_base(nb / radix, base);
		ft_putnbr_base(nb % radix, base);
	}
	else
	{
		ft_putchar(base[nb]);
	}
}
/*
#include<stdlib.h>
int	main(int argc, char **argv)
{
	if (argc == 3)
		ft_putnbr_base(atoi(argv[1]), argv[2]);
}
*/
