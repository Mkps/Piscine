/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloubier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:21:50 by aloubier          #+#    #+#             */
/*   Updated: 2022/10/05 09:28:24 by aloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H
# define DO_OP_H
# include <unistd.h>
# include <stdlib.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nbr);
int		ft_atoi(char *str);
void	ft_substract(int a, int b);
void	ft_add(int a, int b);
void	ft_multiply(int a, int b);
void	ft_divide(int a, int b);
void	ft_modulo(int a, int b);

#endif
