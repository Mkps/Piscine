/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvine <hvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 11:23:19 by hvine             #+#    #+#             */
/*   Updated: 2022/09/25 19:46:29 by hvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int is_num(char c);

/**
 * @brief Counts the amount of arguments given.
 *
 * Returns the size of the square, or 0 if the input is invalid.
 */
int get_grid_size(char *arg)
{
	int i;
	int acc;

	i = 0;
	acc = 0;
	while (arg[i] != '\0')
	{
		if (is_num(arg[i]))
		{
			acc++;
			while (is_num(arg[i]))
				i++;
		}
		i++;
	}
	if (acc % 4 == 0)
		return (acc / 4);
	return (0);
}

/**
 * @brief Parses the input into a 2D array.
 *
 * Returns a pointer to the 2D array, or nil.
 */
int *get_grid_border_from_arg(char *arg, int size)
{
	int i;
	int j;
	int *tmp;

	tmp = malloc(sizeof(int) * (size * size) + 1);
	if (tmp == NULL)
		return (0);
	i = 0;
		j = 0;
	while (arg[i] != '\0' && j < size * size)
	{
		if (is_num(arg[i]))
			{
				tmp[j] = arg[i] - 48;
			}
			else
				return (0);
			
			j++;
		
		i += 2;
	}
	return (tmp);
}