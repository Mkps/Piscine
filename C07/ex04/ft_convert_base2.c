/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloubier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 16:11:17 by aloubier          #+#    #+#             */
/*   Updated: 2022/10/04 18:23:56 by aloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_base_cycle(char *str, int *error);

int	ft_nbr_length(int nbr, char *base)
{
	int				base_length;
	int				length;
	unsigned int	nb;

	length = 0;
	base_length = ft_base_cycle(base, 0);
	if (nbr <= 0)
	{
		nb = nbr * -1;
		length++;
	}
	else
		nb = nbr;
	while (nb >= (unsigned)base_length)
	{
		nb /= base_length;
		length++;
	}
	length++;
	return (length);
}

void	ft_change_nbr_base(char *result_array, int nbr, char *base)
{
	long			nb;
	int				radix;
	int				length_number;
	int				i;

	nb = nbr;
	radix = ft_base_cycle(base, 0);
	length_number = ft_nbr_length(nbr, base);
	i = 0;
	if (nb < 0)
	{
		result_array[0] = '-';
		nb *= -1;
		i++;
	}
	length_number--;
	while (nb >= radix)
	{
		result_array[length_number] = base[nb % radix];
		nb /= radix;
		length_number--;
	}
	if (nb < radix)
		result_array[i] = base[nb];
}
