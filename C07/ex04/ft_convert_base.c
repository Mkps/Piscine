/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloubier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 15:55:25 by aloubier          #+#    #+#             */
/*   Updated: 2022/10/04 18:35:08 by aloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_change_nbr_base(char *result_array, int nbr, char *base);
int		ft_nbr_length(int nbr, char *base);

int	ft_base_cycle(char *str, int *error)
{
	int	i;
	int	j;

	i = 0;
	if (str[0] == '\0' || str[1] == '\0')
		*error = 1;
	while (str[i])
	{
		if (str[i] <= 32 || str[i] > 126
			|| str[i] == '-' || str[i] == '+')
			*error = 1;
		j = i + 1;
		while (str[j])
		{
			if (str[i] == str[j])
				*error = 1;
			j++;
		}
		i++;
	}
	return (i);
}

int	ft_cycle_str(char *str, int *position)
{
	int	i;
	int	sign;

	i = 0;
	sign = 1;
	while ((str[i] <= 13 && str[i] >= 9) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	*position = i;
	return (sign);
}

int	number_to_base(char c, char *base)
{
	int	nb;

	nb = 0;
	while (base[nb] != '\0')
	{
		if (c == base[nb])
			return (nb);
		nb++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	error;
	int	i;
	int	radix;
	int	sign;
	int	result;

	i = 0;
	radix = 0;
	error = 0;
	radix = ft_base_cycle(base, &error);
	if (error == 1)
		return (0);
	sign = ft_cycle_str(str, &i);
	result = 0;
	while (number_to_base(str[i], base) != -1)
	{
		result *= radix;
		result += number_to_base(str[i], base);
		i++;
	}
	return (result * sign);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		result;
	int		nbr_length;
	char	*result_array;
	int		error;

	error = 0;
	ft_base_cycle(base_from, &error);
	ft_base_cycle(base_to, &error);
	if (error != 0)
		return (NULL);
	result = ft_atoi_base(nbr, base_from);
	nbr_length = ft_nbr_length(result, base_to);
	result_array = (char *)malloc(sizeof (char) * (nbr_length + 2));
	if (!result_array)
		return (NULL);
	ft_change_nbr_base(result_array, result, base_to);
	result_array[nbr_length] = '\0';
	return (result_array);
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	char *result;
	if (argc == 4)
	{
		result = ft_convert_base(argv[1], argv[2], argv[3]);
		printf("%s", result);
	}
}
*/
