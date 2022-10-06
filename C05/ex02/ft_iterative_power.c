/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloubier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 13:22:16 by aloubier          #+#    #+#             */
/*   Updated: 2022/09/26 11:27:07 by aloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	if (nb == 0 && power == 0)
		return (1);
	if (power < 0)
		return (0);
	result = 1;
	while (power >= 1)
	{
		result = result * nb;
		power--;
	}
	return (result);
}
/*
int	main(void)
{
	printf("Result %i\n", ft_iterative_power(5, 2));
}
*/
