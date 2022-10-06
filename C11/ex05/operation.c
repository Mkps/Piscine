/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloubier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:28:39 by aloubier          #+#    #+#             */
/*   Updated: 2022/10/05 09:28:58 by aloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

void	ft_substract(int a, int b)
{
	int	res;

	res = a - b;
	ft_putnbr(res);
	return ;
}

void	ft_add(int a, int b)
{
	int	res;

	res = a + b;
	ft_putnbr(res);
	return ;
}

void	ft_multiply(int a, int b)
{
	int	res;

	res = a * b;
	ft_putnbr(res);
	return ;
}

void	ft_divide(int a, int b)
{
	int	res;

	if (b == 0)
	{
		ft_putstr("Stop : division by zero");
		return ;
	}
	else
	{
		res = a / b;
		ft_putnbr(res);
		return ;
	}
}

void	ft_modulo(int a, int b)
{
	int	res;

	if (b == 0)
	{
		ft_putstr("Stop : modulo by zero");
		return ;
	}
	else
	{
		res = a % b;
		ft_putnbr(res);
		return ;
	}
}
