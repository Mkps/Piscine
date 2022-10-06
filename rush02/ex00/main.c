/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvine <hvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 10:19:25 by hvine             #+#    #+#             */
/*   Updated: 2022/09/25 19:48:04 by hvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "constants.h"

int get_grid_size(char *arg);
int *get_grid_border_from_arg(char *arg, int size);
void display_error(char *str);
void putstr(char *str);
void matrix_init(int ***arr);
void matrix_free(int **arr, int size);
int	recursion(int **tab, int x, int y);
void display_board(int **board);

int **g_board;
int *g_border;

int main(int argc, char **argv)
{
	char *debug_arg = "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2";

	// if (argc == 1)
	// {
	// 	display_error("Too few arguments.\n");
	// 	display_error("Exiting program...\n");
	// 	return (1);
	// }
	// else if (argc > 2)
	// {
	// 	display_error("Too many arguments\n");
	// 	display_error("Exiting program...\n");
	// 	return (1);
	// }
	//putstr("Parsing grid...\n");

	g_border = get_grid_border_from_arg(debug_arg, SIZE);
	matrix_init(&g_board);
	recursion(g_board, 0, 0);
	display_board(g_board);
	matrix_free(g_board, SIZE);
	return (0);
}
