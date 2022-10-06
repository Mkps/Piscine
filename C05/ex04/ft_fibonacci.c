/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloubier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 14:10:07 by aloubier          #+#    #+#             */
/*   Updated: 2022/09/26 11:28:39 by aloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	if (index > 1)
		return (ft_fibonacci(index - 1) + ft_fibonacci(index -2));
	return (-1);
}
/*
int	main(void)
{
	int	i;

	i = 0;
	while (i < 12)
	{
		printf("Result is %i\n", ft_fibonacci(i));
		i++;
	}
}
*/
