/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   recursion.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvine <hvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 11:03:13 by aloubier          #+#    #+#             */
/*   Updated: 2022/09/25 18:30:34 by aloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "constants.h"
extern int **g_board;

int	condition(int nb, int **tab, int x,int y, int size);
int	check_col(int **tab, int x, int y, int size);
int	check_row(int **tab, int x, int y, int size);

int	recursion(int **tab, int x, int y)
{
	int number;
	
	if (x == SIZE && y == SIZE - 1)
	{	
		if (check_row(g_board, x, y, SIZE) && check_col(g_board, x, y, SIZE))
			return (1);
	}
	if (x == SIZE)
	{
		if (check_row(g_board, x, y, SIZE) == 0)
			return (0);
		y++;
		x = 0;
	}
	if (g_board[y][x] > 0 && y == SIZE - 1)
			if (check_col(g_board, x, y, SIZE) == 0)
				return (0);
	if (g_board[y][x] > 0)
		return (recursion(g_board, x + 1, y));
	number = 1;
	while (number <= SIZE)
	{
		if (condition(number, g_board, x, y, SIZE) == 1)
		{
			g_board[y][x] = number;
			if (recursion(g_board, x + 1, y) == 1)
				return (1);
		}
		g_board[y][x] = 0;
		number++;
	}
	return (0);
}