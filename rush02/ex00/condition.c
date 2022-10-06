/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   condition.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvine <hvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 15:58:46 by lsouquie          #+#    #+#             */
/*   Updated: 2022/09/25 18:34:52 by aloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "constants.h"
extern int **g_board;

int	check_top_constraint(int **tab, int x, int y, int size);
int	check_bottom_constraint(int **tab, int x, int y, int size);
int	check_left_constraint(int **tab, int x, int y, int size);
int	check_right_constraint(int **tab, int x, int y, int size);

int verif_nb(int **tab, int x, int y, int nb) 
{
	int a;
	a = 0;

	while (a < SIZE)
	{
		if (g_board[y][a] == nb)
			return (0);
		a++;
	}
	a = 0;
	while (a < SIZE)
	{
		if (g_board[a][x] == nb)
			return (0);
		a++;
	}
	return (1);
}

int	check_col(int **tab, int x, int y, int size)
{
	if (!check_top_constraint(g_board, x, y, size))
		return (0);
	if (!check_bottom_constraint(g_board, x, y, size))
		return (0);
	return (1);
}
int	check_row(int **tab, int x, int y, int size)
{
	if (!check_left_constraint(g_board, x, y, size))
		return (0);
	if (!check_right_constraint(g_board, x, y, size))
		return (0);
	return (1);
}
int	condition(int nb, int **tab, int x,int y, int size)
{
	if (!verif_nb(g_board, x, y, nb))
		return (0);
	return (1);
}