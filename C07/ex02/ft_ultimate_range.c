/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloubier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 17:31:33 by aloubier          #+#    #+#             */
/*   Updated: 2022/09/29 15:05:41 by aloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*tab;
	int	i;
	int	size;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	tab = malloc(size * sizeof (*tab));
	if (!tab)
	{
		*range = NULL;
		return (-1);
	}
	*range = tab;
	i = 0;
	while (i < size)
	{
		tab[i] = min + i;
		i++;
	}
	return (size);
}

/*
int	main(int argc, char **argv)
{
	int i;
	int *array;
	int	range;

	if (argc != 3)
		return (1);
	range = atoi(argv[2]) - atoi(argv[1]);
	printf("return is %d\n", ft_ultimate_range
	(&array,atoi(argv[1]), atoi(argv[2])));
	free(array);
	return (0);
}
*/
