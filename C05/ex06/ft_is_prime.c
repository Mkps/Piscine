/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloubier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 10:18:18 by aloubier          #+#    #+#             */
/*   Updated: 2022/09/27 17:17:23 by aloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb == 2 || nb == 3)
		return (1);
	if (nb <= 1 || nb % 2 == 0 || nb % 3 == 0)
		return (0);
	i = 5;
	while (i <= nb / 2)
	{
		if (nb % i == 0 || nb % (i + 2) == 0)
			return (0);
		i += 6;
	}
	return (1);
}
/*
int	main(int argc, char **argv)
{
	int	i;

	i = 2147483600;
	while (++i <= 2147483647)
	{
		if(ft_is_prime(i))
			printf("%i is prime : %i\n", i, ft_is_prime(i));
		if( i == 2147483647)
			return (1);
	}
	return (0);
}
*/
