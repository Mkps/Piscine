/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloubier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 13:37:35 by aloubier          #+#    #+#             */
/*   Updated: 2022/09/26 11:27:57 by aloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power > 0)
		return (nb * ft_recursive_power(nb, power - 1));
	return (0);
}
/*
int	main(void)
{
	printf("Result : %i\n", ft_recursive_power(0, 0));
}
*/
