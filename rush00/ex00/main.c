/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloubier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 15:43:05 by aloubier          #+#    #+#             */
/*   Updated: 2022/09/18 14:32:27 by jlanza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush00(int x, int y);

int	ft_atoi(char *str)
{
	int	i;
	int	neg;
	int	result;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
	{
		i++;
	}
	neg = 1;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			neg = -1;
		}
		i++;
	}
	result = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * neg);
}

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		rush00(ft_atoi(argv[1]), ft_atoi(argv[2]));
	}
	return (0);
}
