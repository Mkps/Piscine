/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloubier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 16:09:18 by aloubier          #+#    #+#             */
/*   Updated: 2022/09/29 15:39:36 by aloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;
	int	range;

	if (min >= max)
		return (0);
	range = max - min;
	tab = malloc(range * sizeof (*tab));
	if (!tab)
		return (0);
	i = 0;
	while (i < range)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}
/*
int	main(int argc, char **argv)
{
	int *array;
	int	i;

	array = ft_range(atoi(argv[1]), atoi(argv[2]));
	i = 0;
	while (i < 6 )
	{
		printf("%i", array[i]);
		i++;
	}
}
*/
