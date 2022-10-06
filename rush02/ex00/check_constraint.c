/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_constraint.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsouquie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 19:39:51 by lsouquie          #+#    #+#             */
/*   Updated: 2022/09/25 20:08:20 by lsouquie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

extern int *g_border;
extern int **g_board;

int	get_constraint(int side, int x)
{
	return (g_border[x + (side * 4)]);
}

int	check_top_constraint(int **tab, int x, int y, int size)
{
	int	a;
	int	current_max;
	int	new_max_count;

	a = 0;
	current_max = g_board[a][x];
	new_max_count = 1;
	while (a < size)
	{
		if (g_board[a][x] > current_max)
		{
			current_max = g_board[a][x];
			new_max_count++;
		}
		if (new_max_count > get_constraint(0, x))
			return (0);
	a++;
	}
	return (1);
}

int	check_bottom_constraint(int **tab, int x, int y, int size)
{
	int	a;
	int	current_max;
	int	new_max_count;

	a = size - 1;
	current_max = g_board[a][x];
	new_max_count = 1;
	while (a >= 0)
	{
		if (g_board[a][x] > current_max)
		{
			current_max = g_board[a][x];
			new_max_count++;
		}
		if (new_max_count > get_constraint(1, x))
			return (0);
	a--;
	}
	return (1);
}

int	check_left_constraint(int **g_board, int x, int y, int size)
{
	int	a;
	int	current_max;
	int	new_max_count;

	a = 0;
	current_max = g_board[y][a];
	new_max_count = 1;
	while (a < size)
	{
		if (g_board[y][a] > current_max)
			current_max = g_board[y][a];
			new_max_count++;
		if (new_max_count > get_constraint(2, y))
			return (0);
	a++;
	}
	return (1);
}

int	check_right_constraint(int **tab, int x, int y, int size)
{
	int	a;
	int	current_max;
	int	new_max_count;

	a = size - 1;
	current_max = g_board[y][a];
	new_max_count = 1;
	while (a >= 0)
	{
		if (g_board[y][a] > current_max)
		{
			current_max = g_board[y][a];
			new_max_count++;
		}
		if (new_max_count > get_constraint(3, y))
			return (0);
	a--;
	}
	return (1);
}
