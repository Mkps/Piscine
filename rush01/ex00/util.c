/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvine <hvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 14:46:51 by hvine             #+#    #+#             */
/*   Updated: 2022/09/25 15:01:33 by hvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "constants.h"

void	ft_putchar(char c, int fd)
{
	write(fd, &c, 1);
}

void	putstr(char *str, int fd)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i], fd);
		i++;
	}
}

int	is_num(char c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

void display_error(char *str)
{
	putstr(str, 2);
}

void display_board(int **board)
{
	int x;
	int y;

	y = 0;
	while (y < SIZE)
	{
		x = 0;
		while (x < SIZE)
		{
			ft_putchar(board[y][x] + '0', 1);
			if (x == SIZE - 1)
				ft_putchar('\n', 1);
			x++;
		}
		y++;
	}
}