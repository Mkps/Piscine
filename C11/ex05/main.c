/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloubier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:21:08 by aloubier          #+#    #+#             */
/*   Updated: 2022/10/06 11:31:39 by aloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

//typedef void	(*t_op)(int, int);

int	ft_get_operator(char *str)
{
	int	i;

	if (str[1] != '\0')
		return (-1);
	else
	i = 0;
	while (i < 5)
	{
		if (str[0] == "+-*/%"[i])
			return (i);
		i++;
	}
	return (-1);
}

void	ft_do_op(int o, int a, int b)
{
	void	(*ft_op[5])(int, int);

	ft_op[0] = &ft_add;
	ft_op[1] = &ft_substract;
	ft_op[2] = &ft_multiply;
	ft_op[3] = &ft_divide;
	ft_op[4] = &ft_modulo;
	ft_op[o](a, b);
}

int	main(int argc, char **argv)
{
	int	operator;
	int	first_nb;
	int	second_nb;

	if (argc == 4)
	{
		first_nb = ft_atoi(argv[1]);
		second_nb = ft_atoi(argv[3]);
		operator = ft_get_operator(argv[2]);
		if (operator == -1)
			write(1, "0", 1);
		else
			ft_do_op(operator, first_nb, second_nb);
		write(1, "\n", 1);
	}
	return (0);
}
/*
	t_op	f_ptr[5]{
		&ft_add,
		&ft_substract,
		&ft_multiply,
		&ft_divide,
		&ft_modulo};
*/
