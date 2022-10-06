/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvine <hvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 19:16:44 by hvine             #+#    #+#             */
/*   Updated: 2022/09/25 19:17:07 by hvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "constants.h"

void matrix_init(int ***arr)
{
    int** temp_arr;
	int	i;
	int	j;

	i = 0;
    temp_arr = malloc(SIZE * sizeof(int*));
    while (i < SIZE)
    {
		j = 0;
        temp_arr[i] = malloc(SIZE * sizeof(int));
        while (j < SIZE)
        {
            temp_arr[i][j] = 0;
			j++;
        }
		i++;
    }

    *arr = temp_arr;
}

void matrix_free(int **arr, int size)
{
	int	i;

	i = 0;
    while (i < size)
    {
        free(arr[i]);
		i++;
    }
    free(arr);
}