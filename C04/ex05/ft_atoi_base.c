/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloubier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 12:48:31 by aloubier          #+#    #+#             */
/*   Updated: 2022/10/04 09:51:03 by aloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
/*
#include<stdio.h>
int	main(int argc, char **argv)
{
	if (argc == 3)
		printf("Result is %i", ft_atoi_base(argv[1], argv[2]));
	printf("\n");
}
*/
