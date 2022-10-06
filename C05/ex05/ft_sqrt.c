/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloubier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 14:55:53 by aloubier          #+#    #+#             */
/*   Updated: 2022/09/27 17:19:52 by aloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb == 1)
		return (1);
	while (i <= nb / 2)
	{
		if ((i * i) == nb)
			return (i);
		if ((i * i) > nb)
			return (0);
		if ((i * i) < nb)
			i++;
	}
	return (0);
}
/*
int	main(void)
{
	printf("Result %i\n", ft_sqrt(1));
	printf("Result %i\n", ft_sqrt(10));
	printf("Result %i\n", ft_sqrt(2147483647));
	printf("Result %i\n", sqrt(1));
	printf("Result %i\n", sqrt(10));
	printf("Result %i\n", sqrt(2147483647));
}
*/
