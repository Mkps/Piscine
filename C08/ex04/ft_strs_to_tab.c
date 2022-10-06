/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloubier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 12:31:38 by aloubier          #+#    #+#             */
/*   Updated: 2022/10/03 09:10:44 by aloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_another_one(char *src)
{
	int		size;
	char	*cpy;
	int		i;

	i = 0;
	size = ft_strlen(src);
	cpy = malloc(sizeof (char) * (size + 1));
	if (!cpy)
		return (NULL);
	while (src[i])
	{
		cpy[i] = src[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*s_return;

	s_return = malloc(sizeof (struct s_stock_str) * (ac + 1));
	if (!s_return)
		return (0);
	i = 0;
	while (i < ac)
	{
		s_return[i].size = ft_strlen(av[i]);
		s_return[i].str = av[i];
		s_return[i].copy = ft_another_one(av[i]);
		i++;
	}
	s_return[i].str = 0;
	s_return[i].copy = 0;
	return (s_return);
}
/*
int main(int argc, char **argv)
{
	ft_show_tab(ft_strs_to_tab(argc, argv));
	return (0);
}
*/
