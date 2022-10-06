/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloubier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 17:11:51 by aloubier          #+#    #+#             */
/*   Updated: 2022/10/05 16:45:59 by aloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*array;
	int	i;

	array = malloc(sizeof(*array) * length);
	if (!array)
		return (0);
	i = 0;
	while (i < length)
	{
		array[i] = f(tab[i]);
		i++;
	}
	return (array);
}
