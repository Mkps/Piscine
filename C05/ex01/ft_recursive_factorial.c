/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloubier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 13:11:17 by aloubier          #+#    #+#             */
/*   Updated: 2022/09/22 14:19:58 by aloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (1);
	nb *= ft_recursive_factorial(nb - 1);
	return (nb);
}
/*
int	main(void)
{
	printf("Result is; %i\n", ft_recursive_factorial(9));
}
*/
