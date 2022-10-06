/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloubier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 17:34:49 by aloubier          #+#    #+#             */
/*   Updated: 2022/10/05 16:38:47 by aloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	f_sorted;

	i = 0;
	f_sorted = 1;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			f_sorted = 0;
		i++;
	}
	if (f_sorted == 0)
	{
		i = 0;
		while (i < length - 1)
		{
			if (f(tab[i], tab[i + 1]) < 0)
				return (0);
			i++;
		}
	}
	return (1);
}
